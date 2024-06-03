import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

def main():
     folder = "/home/ssorra/mifasol_a/pytorch/data/"
     names = ['sepal_length', 'sepal_width', 'petal_length', 'petal_width', 'class']
     dataset = pd.read_csv(folder + "iris.data", names=names)

     print(dataset.head())
     print(dataset.info())
     
     # X,y 만들고 train, test로 나누기
     # predictors = ['sepal_length', 'sepal_width', 'petal_length', 'petal_width']
     # outcome = 'Class'
     # x = dataset[predictors]
     # y = dataset[outcome]습
     X = dataset.iloc[:, : -1].values
     y = dataset.iloc[:, 4].values
     X_train, X_test, y_train, y_test = train_test_split(X,y, test_size = 0.2, random_state = 0)
     scaler = StandardScaler()
     
     # 정규화
     scaler = StandardScaler()
     X_train = scaler.fit_transform(X_train)
     X_test = scaler.fit_transform(X_test)
     
     # ML model 만들기 및 학습
     knn = KNeighborsClassifier(n_neighbors=5)
     knn.fit(X_train, y_train)
     
     # 예측, 정확도 출력
     y_pred = knn.predict(X_test)
     print(accuracy_score(y_test, y_pred))
     
       # knn의 k값에 따른 정확도 출력 검증
     k = 10
     acc_array = np.zeros(k)
     for k in np.arange(1, k+1):
          knn = KNeighborsClassifier(n_neighbors=k).fit(X_train, y_train)
          y_pred = knn.predict(X_test)
          acc_array[k-1] = accuracy_score(y_test, y_pred)
     print(list(acc_array))
    
     
     
if __name__ == "__main__":
    main()
    