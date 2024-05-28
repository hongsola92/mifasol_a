import pandas as pd

def main():
     data_url = "https://archive.ics.uci.edu/ml/machine-learning-databases/housing/housing.data"
     # df_data = pd.read_csv(data_url, sep="/s+", header = None)
     # df = pd.DataFrame(df_data)
    
     # 데이터를 읽어들이고 데이터프레임으로 변환
     df = pd.read_csv(data_url, sep="\s+", header=None)
     
     # 데이터프레임의 첫 5개 행 출력
     print(df.head())
     
     # 데이터프레임의 첫 10개 행 출력
     print(df.head(10))
     
     # 데이터프레임의 요약 정보 출력
     print(df.info())
     
if __name__ == "__main__":
    main()
