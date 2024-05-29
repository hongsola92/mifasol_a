import pandas as pd
import scipy.stats as stats

def main():
    # PMF 계산 (2번 성공, 5번 시도, 성공 확률 0.1)
    print(stats.binom.pmf(2, n=5, p=0.1))
    
    # CDF 계산 (2번 이하 성공, 5번 시도, 성공 확률 0.1)
    print(stats.binom.cdf(2, n=5, p=0.1))

if __name__ == "__main__":
    main()
