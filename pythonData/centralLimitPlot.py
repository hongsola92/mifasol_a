import numpy as np
import pandas as pd
import seaborn as sns

def main():
     folder = "/home/ssorra/mifasol_a/pythonData/data/"
     loans_income = pd.read_csv(folder +"loans_income.csv").squeeze('columns')
     print(loans_income.info())
     print(loans_income.head())
     
     sample_data = pd.DataFrame({
          'income': loans_income.sample(100),'type': 'Data'})
     
if __name__ == "__main__":
    main()
    