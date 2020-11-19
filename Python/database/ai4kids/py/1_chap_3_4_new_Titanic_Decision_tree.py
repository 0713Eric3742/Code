import matplotlib.pyplot as plt
import wget
import os
from sklearn.metrics import accuracy_score, recall_score
from sklearn import tree
import numpy as np
import pandas as pd
if not os.path.exists('train.csv'):
    wget.download("https://drive.google.com/uc?export=download&id=13bGRvk1Vq9tFRzMWsXZwOg7TzZLQj83O" , out="train.csv")
data = pd.read_csv('train.csv')
data = data.drop(columns=['Name', 'Ticket', 'Cabin'])
print(data)
# 轉換Embarked欄位
typeEmbarked = list(set(data['Embarked']))
# 把Embarked欄位的文字按順序轉換成0~n的數字
for i in range(len(typeEmbarked)):
#    print(typeEmbarked[i])
    row =  data['Embarked'] == typeEmbarked[i]
    data.loc[row, 'Embarked'] = i
# 轉換Sex欄位
typeSex = list(set(data['Sex']))
# 把Sex欄位的文字按順序轉換成0~n的數字
for i in range(len(typeSex)):
#    print(typeSex[i])
    rows =  data['Sex'] == typeSex[i]
    data.loc[rows, 'Sex'] = i
print(data)
#資料集中，取出最後有存活的資料集 data_sur
data_sur = data[data['Survived']==1]
#存活且為男性的資料集male，存活且為女性的資料集female
df_male = data_sur[data_sur['Sex']==0]
df_female = data_sur[data_sur['Sex']==1]
#pandas內建的 plot.bar() 畫出柱狀圖來分析
df = pd.DataFrame({'Sex':['Male', 'Female'], 'val':[len(df_male), len(df_female)]})
ax = df.plot.bar(x='Sex', y='val', rot=0)
plt.show()
#資料集內存活並且小於30歲的資料集 df_young, 和存活並大於30歲的資料集 df_older
df_young = data_sur[data_sur['Age'] < 30]
df_older = data_sur[data_sur['Age'] > 30]
#畫出柱狀圖觀察
df = pd.DataFrame({'Age':['young', 'older'], 'val':[len(df_young), len(df_older)]})
ax = df.plot.bar(x='Age', y='val', rot=0)
plt.show()
print(data)
# fillna(999)會讓所有缺失值都被補成999，之所以選999是因為不認為資料集的任何欄位中有999這個數字。
data = data.fillna(999)
print(data)
# 分割資料
X_train = data[:750]
X_test = data[750:]
# 把`Survived`作為`y_train`從訓練資料中獨立出來。
y_train = X_train.pop('Survived')
# 建立並訓練(fit)決策樹
clf = tree.DecisionTreeClassifier()
clf = clf.fit(X_train, y_train)
# 從測試資料集取出y值作為真實答案
y_test = X_test.pop('Survived')
# 進行預測，取得預測答案
y_pred = clf.predict(X_test)
print('accuracy_score=',accuracy_score(y_test, y_pred))
print('recall_score=',recall_score(y_test, y_pred))
# 我們現在來用這個已經訓練好的model -> clf 來玩玩預測的結果
# 首先我們要再將一個用不到的欄位拿掉
data = data.drop(columns=['PassengerId'])
print(data[:10])
# 並且再fit 一次model
# 分割資料
X_train = data[:750]
X_test = data[750:]
# 把`Survived`作為`y_train`從訓練資料中獨立出來。
y_train = X_train.pop('Survived')
# 建立並訓練(fit)決策樹
clf = tree.DecisionTreeClassifier()
clf = clf.fit(X_train, y_train)
y_test = X_test.pop('Survived')
# 進行預測，取得預測答案
y_pred = clf.predict(X_test)
print('accuracy_score=',accuracy_score(y_test, y_pred))
print('recall_score=',recall_score(y_test, y_pred))
# my_survival =[[Pclass, Sex, Age, Sibsp, Parch, Fare, Embarked]]
my_survival = [[2,0,20,3, 1,900, 0]]
pred = clf.predict(my_survival)
if pred == 0:
    print('Oh no! You did not survive')
else:
    print('Nice! You survived')
if os.path.exists('train.csv'):
    os.remove('train.csv')