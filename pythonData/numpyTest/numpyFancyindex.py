import numpy as np

def main():
    # 배열 x를 정의, 값은 [4, 6, 7, 3, 2]
    x = np.array([4, 6, 7, 3, 2])
    
    # x 배열에서 각 요소가 3보다 큰지 여부를 판별해서 cond에 저장
    cond = x > 3
    # cond 배열 출력
    print(f"cond : {cond}")
    # cond 조건을 만족하는 x의 요소들 출력
    print(f"x[cond] : {x[cond]}")
    # 조건을 직접 사용해서 3보다 큰 x의 요소들 출력
    print(f"x[x > 3] : {x[x > 3]}")
    
    # fancy indexing 예제
    # cond 배열을 다시 정의
    cond = np.array([1, 2, 0, 2, 2, 2, 1, 0, 1, 0])
    # 0부터 4까지의 정수 중 30개의 난수를 cond2에 저장
    cond2 = np.random.randint(0, 5, 30)
    
    # x 배열 출력
    print(f"x : {x}")
    # cond 배열 출력
    print(f"cond : {cond}")
    # cond 값을 인덱스로 사용해서 x의 요소 출력
    print(f"x[cond] : {x[cond]}")
    # cond2 값을 인덱스로 사용해서 x의 요소 출력
    print(f"x[cond2] : {x[cond2]}")

    # x 배열을 1부터 999까지의 정수 중 30개의 난수를 사용해서 재정의
    x = np.random.randint(1, 1000, 30)
    # x 배열을 정렬한 후 출력
    print(f"x[x.argsort()] : {x[x.argsort()]}")
     
if __name__ == "__main__":
    main()
