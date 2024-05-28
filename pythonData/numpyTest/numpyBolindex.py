import numpy as np

def main():
    # 1부터 99까지의 정수 중 10개의 난수를 배열 x_1에 저장.
    x_1 = np.random.randint(1, 100, 10)
    # 1부터 99까지의 정수 중 10개의 난수를 배열 x_2에 저장.
    x_2 = np.random.randint(1, 100, 10)
     
    # 배열 x_1 출력
    print(f"x_1 : {x_1}")
    # 배열 x_2 출력
    print(f"x_2 : {x_2}")
    # x_1의 각 요소와 x_2의 각 요소를 비교하여 x_1이 큰지 여부를 Boolean 배열로 출력
    print(f"x_1 > x_2 : {x_1 > x_2}")
    # (x_1 > x_2) 결과의 all() 메서드 호출
    print(f"(x_1 > x_2).all() : {(x_1 > x_2).all()}")
    # x_1 배열의 요소 중 하나라도 100보다 큰지 여부를 출력
    print(f"(x_1 > 100).any() : {(x_1 > 100).any()}")
    # x_1의 요소 중 하나라도 x_2의 대응 요소보다 큰지 여부를 출력
    print(f"(x_1 > x_2).any() : {(x_1 > x_2).any()}")
    # x_1 배열의 각 요소가 0보다 큰지 여부를 Boolean 배열로 출력
    print(f"(x_1 > 0) : {(x_1 > 0)}")
    # x_1 배열의 모든 요소가 0보다 큰지 여부를 출력
    print(f"(x_1 > 0).all() : {(x_1 > 0).all()}")
     
    # where 예제
    x = np.array([4, 6, 7, 3, 2])
    # 각 요소가 5보다 큰지 여부를 출력
    print(x > 5)
    # 조건을 만족하는 인덱스를 출력
    print(f"np.where(x > 5) : {np.where(x > 5)}")
    # 조건을 만족하는 인덱스를 다시 출력
    print(np.where(x > 5))
    # 조건을 만족하는 인덱스를 사용하여 해당 요소 출력
    for i in np.where(x > 5)[0]:
        print(f"x[{i}] : {x[i]}")
    # argsort, argmax, argmin
    print(f"np.argsort(x) : {np.argsort(x)}")
    for i in np.argsort(x):
        print(f"x[{i}] : {x[i]}")
    print(f"np.argmax(x) : {np.argmax(x)}")
    print(f"np.argmin(x) : {np.argmin(x)}")
         
if __name__ == "__main__":
    main()
