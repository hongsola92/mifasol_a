import pandas as pd
from sklearn.utils import resample
import numpy as np

def main():
    folder = "/home/ssorra/mifasol_a/pythonData/data/"
    loans_income: pd.Series = pd.read_csv(folder + "loans_income.csv").squeeze('columns')
    results = []
    for nrepeat in range(1000):
        sample = resample(loans_income)
        results.append(sample.median())
    result = pd.Series(results)
    print("부트 스트랩")
    print(f"원본: {loans_income.median()}")
    print(f"바이어스: {result.mean() - loans_income.median()}")
    print(f"표준편차: {result.std()}")

if __name__ == "__main__":
    main()
