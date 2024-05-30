import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import random

# 순열 검정 함수
def perm_func(x: pd.Series, nA, nB):
    n = nA + nB
    idx_b = set(random.sample(range(n), nB))  # 랜덤하게 nB개의 인덱스 선택
    idx_a = set(range(n)) - idx_b  # 나머지 인덱스는 A 그룹
    return x.loc[list(idx_b)].mean() - x.loc[list(idx_a)].mean()  # 평균 차이 계산

def main():
    folder = "/home/ssorra/mifasol_a/pythonData/data/"
    session_times = pd.read_csv(folder + "web_page_data.csv")  # 데이터 읽기
    session_times["Time"] = session_times["Time"] * 100  # 시간 데이터를 100배로 조정
    print(session_times.head())  # 처음 5개 행 출력
    print(session_times.info())  # 데이터 정보 출력
    
    # A, B 페이지 평균 시간 계산
    mean_a = session_times[session_times.Page == "Page A"].Time.mean()
    mean_b = session_times[session_times.Page == "Page B"].Time.mean()
    print(mean_a)  # A 페이지 평균 시간
    print(mean_b)  # B 페이지 평균 시간
    print(mean_b - mean_a)  # 평균 차이
          
    # 박스 플롯 (주석 처리)
    # fig = plt.figure()
    # ax = fig.add_subplot()
    # session_times.boxplot(by="Page", column="Time", ax=ax)
    # plt.show()
     
    # 순열 검정
    nA = session_times[session_times.Page == "Page A"].shape[0]  # A 페이지 샘플 수
    nB = session_times[session_times.Page == "Page B"].shape[0]  # B 페이지 샘플 수
    print(perm_func(session_times.Time, nA, nB))  # 한 번의 순열 검정 결과
    
    # 1000번 순열 검정 수행
    perm_diffs = [perm_func(session_times.Time, nA, nB) for _ in range(1000)]
     
    # 히스토그램 그리기
    fig = plt.figure()
    ax = fig.add_subplot()
    ax.hist(perm_diffs, bins=11, rwidth=0.9)  # 히스토그램
    ax.text(50, 100, "Observed\ndifference (in seconds)")  # 텍스트 추가
    ax.set_xlabel("Session time difference (in seconds)")  # x축 라벨
    ax.set_ylabel("Frequency")  # y축 라벨
    
    # p-value 계산
    print(np.mean(np.array(perm_diffs) > (mean_b - mean_a)))
    plt.show()

if __name__ == "__main__":
    main()  # 메인 함수 실행
