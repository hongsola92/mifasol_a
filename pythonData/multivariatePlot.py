import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns

def main():
    # 절대 경로를 사용할 때 주의할 것
    folder = "/home/ssorra/mifasol_a/pythonData/data/"
    file_path = folder + "kc_tax.csv.gz"
    
    # 데이터 읽기
    try:
        kc_tax = pd.read_csv(file_path)
    except FileNotFoundError:
        print(f"파일을 찾을 수 없습니다: {file_path}")
        return
    
    # 데이터 필터링
    kc_tax0 = kc_tax.loc[(kc_tax['TaxAssessedValue'] < 750000) &
                         (kc_tax['SqFtTotLiving'] > 100) &
                         (kc_tax['SqFtTotLiving'] < 3500), :]

    print(kc_tax0.shape)
    print(kc_tax0.head())
    print(kc_tax0.info())

    # Hexbin plot (주석 해제하여 사용)
    """
    ax = kc_tax0.plot.hexbin(x='SqFtTotLiving', y='TaxAssessedValue', gridsize=30, sharex=False, figsize=(5, 4))
    ax.set_xlabel('Finished Square Feet')
    ax.set_ylabel('Tax Assessed Value')
    plt.tight_layout()
    plt.show()
    """

    # 등고선 그리기
    fig, ax = plt.subplots(figsize=(4, 4))
    kc_tax0.replace([np.inf, -np.inf], np.nan, inplace=True)
    ax = sns.kdeplot(data=kc_tax0, x='SqFtTotLiving', y='TaxAssessedValue', ax=ax)
    ax.set_xlabel('Finished Square Feet')
    ax.set_ylabel('Tax Assessed Value')
    plt.show()

if __name__ == "__main__":
    main()
