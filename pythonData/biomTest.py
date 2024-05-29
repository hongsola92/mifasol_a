import pandas as pd
import scipy.stats as stats

def main():
    # PMF 계산 (2번 성공, 5번 시도, 성공 확률 0.1)
    print(stats.binom.pmf(2, n=5, p=0.1))
    
    # CDF 계산 (2번 이하 성공, 5번 시도, 성공 확률 0.1)
    print(stats.binom.cdf(2, n=5, p=0.1))

    # 푸아송 분포
    print(stats.poisson.rvs(2, size=100))
    print(stats.poisson.rvs(2, size=100).mean())
    # 지수분포
    print(stats.expon.rvs(scale=1/0.2, size = 100).mean())

if __name__ == "__main__":
    main()