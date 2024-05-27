import numpy as np

def main():
    v1 = np.array([1, 2, 5], dtype=np.uint8)  # v1 배열 생성
    v2 = np.array([2, 3, 4], dtype=np.uint8)  # v2 배열 생성
    v3 = np.vstack((v1, v2))  # v1과 v2를 세로로 쌓음
    v4 = np.hstack((v1, v2))  # v1과 v2를 가로로 연결
    print("v3 (세로로 스택된 배열):")
    print(v3)
    print("v4 (가로로 연결된 배열):")
    print(v4)

     # v1과 v2를 세로로 연결하고 새 배열 생성
    v5 = np.concatenate((v1.reshape(1, 3), v2.reshape(1, 3)), axis=0)  
    print("v5 (연결되고 재배열된 배열):")
    print(v5)
    print("v5의 형태:")
    print(v5.shape)

     # v1과 v2를 연결하고 1차원 배열로 변환
    v6 = np.concatenate((v1.reshape(1, 3), v2.reshape(1, 3)), axis=0).reshape(-1)
    print("v6 (평탄화된 배열):")
    print(v6)

if __name__ == "__main__":
    main()
