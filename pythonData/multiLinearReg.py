import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression


def main():
    folder = "/home/ssorra/mifasol_a/pythonData/data/"
    house: pd.DataFrame = pd.read_csv(folder + "house_sales.csv", sep='\t')  # 데이터 읽기
    print(house.head())  # 데이터프레임의 처음 5개 행 출력
    print(house.info())  # 데이터프레임 정보 출력

    # 분석에 사용할 열 선택
    subset = ['AdjSalePrice', 'SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']
    outcome = 'AdjSalePrice'  # 종속 변수 (타겟 변수)
    predictors = ['SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']  # 독립 변수 (예측 변수)
    
    house_lm = LinearRegression()  # 선형 회귀 모델 생성
    house_lm.fit(house[predictors], house[outcome])  # 모델 훈련

    # 회귀 모델의 절편과 계수 출력
    print(f"intercept: {house_lm.intercept_:.3f}")
    print(f"Coefficients: ")
    for name, coef in zip(predictors, house_lm.coef_):  # 각 독립 변수의 계수 출력
        print(f"\t{name}: {coef:.3f}")

    # 잔차 계산 (실제값 - 예측값)
    regidue = house[outcome] - house_lm.predict(house[predictors])  # 예측값 계산
    print(f"residuals mean: {regidue.mean():.3f}")  # 잔차의 평균 출력
    print(f"residuals std: {regidue.std():.3f}")  # 잔차의 표준 편차 출력
    print(f"residuals : {regidue}")  # 잔차 출력

    # 테스트 데이터로 예측
    test_data = pd.Series([2500, 5000, 3, 4, 7], index=predictors)
    print(house_lm.predict([test_data]))  # 새로운 데이터에 대한 예측 (형태 무시)

if __name__ == "__main__":
    main()  # 메인 함수 실행
