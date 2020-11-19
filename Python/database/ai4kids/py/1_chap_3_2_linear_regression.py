# '''
# 此部分為補充內容，提供同學參考
# 繪圖套件模組，將資料圖形化顯示，教易觀察
import matplotlib.pyplot as plt
# '''
import numpy as np
import pandas as pd
# 如果要使用一些datasets，都會放在sklearn的datasets下面
# Toy datasets: https://scikit-learn.org/stable/datasets/index.html
# 從 sklearn 載入波士頓房價的資料集
from sklearn.datasets import load_boston
# 載入我們會用到的模型，線性回歸模型
from sklearn.linear_model import LinearRegression
# 載入切分資料集成訓練集及測試集的套件，train_test_split
from sklearn.model_selection import train_test_split
# 載入驗證模型的套件，mean_square_error
from sklearn.metrics import mean_squared_error
# 載入資料集，放到 my_data變數內
my_data = load_boston()
# 可以把 my_data 給印出來，看一下裡面的內容
# 印出來後可知他有幾個 key name 有："data","target","target_names","DESCR","filename" ...等
print(my_data)
print(my_data.data)
# 直接觀察有哪些 key 在資料集內
print(my_data.keys())
print(my_data.DESCR)
# 觀察資料筆數
print("資料筆數:")
print(my_data.data.shape)
# print("\n")
# 觀察我們資料的欄位名稱
print("資料的欄位名稱，分別是:")
print(my_data.feature_names)
print("\n")
# 觀察我們第一筆的資料內容
print("第一筆的資料內容:")
print(my_data.data[1])
print("\n")
# 觀察我們第一筆的預測目標
print("第一筆的目標值(真實值):")
print(my_data.target[1])
print("\n")
# 每個 sklearn 所附的資料集都有 DESCR 這個key可以選來看，代表這個資料集的描述(description的縮寫)
# 這邊礙於篇幅的關係先註解掉了，讀者可以自行把註解拿掉執行看看
# print(my_data.DESCR)
# 補充: 將資料表格化呈現
# 將data轉化成表格
boston_pd = pd.DataFrame(my_data.data)
# 設定表格欄位名稱
boston_pd.columns = my_data.feature_names
# 顯示表格前5筆資料
print(boston_pd.head())
# 將target合併至表格成PRICE欄位
boston_pd['PRICE'] = my_data.target
print(boston_pd.head())
# 我們將資料切分成兩組，把80%當成訓練集，20%當成測試集
# (train_x, train_y) 為80%的訓練集，用來訓練模型
# (test_x , test_y ) 為20%的測試集，用來驗證模型的預測能力
train_x, test_x, train_y, test_y = train_test_split(my_data.data, my_data.target, test_size=0.25, random_state=43, shuffle=True)
# 可以看一下這些資料集的維度，驗證沒有切錯
print("原始資料集的維度大小:" , my_data.data.shape)
print("訓練集的維度大小:   " , train_x.shape)
print("測試集的維度大小:   " , test_x.shape)
# 把預先載入好的套件「線性回歸模型」拿出來使用，並且存到變數my_model中
my_model = LinearRegression()
# 訓練模型，放入要訓練的訓練集(train_x, train_y)
my_model.fit(train_x, train_y)
# 訓練完模型後，我們就可以用 my_model 來預測測試集，產生出我們的預測值，存到 pred 變數內
pred = my_model.predict(test_x)
# 接著就可以使用我們的評估指標 MSE (mean_squared_error) 來評估我們模型的實際誤差
# 注意MSE分數是越接近 0 越好，代表預測的值與真實答案相差無幾
score = mean_squared_error(test_y, pred)
print("模型評估完測試集的MSE: ", score)
print(np.sqrt(score))
# '''
# 補充: 圖形化展示結果
plt.rcParams['font.sans-serif'] = ['Microsoft JhengHei']
plt.scatter(test_y, pred)
plt.plot([0, 50], [0, 50], 'r')
plt.xlabel("真實房價")
plt.ylabel("預測房價")
plt.show()
# '''
# 挑選其中的 4個特徵
# 這裡的 , 前面如果填上數字代表著要哪些列(橫向), 填上 : 就是從最前面到最後面, 也就是全部都要
# 而, 後面代表著挑選哪些行(直向), 也就是特徵, 所以直接填上數字代表你要挑選特徵欄位的位置
train_x_f4 = train_x[:, [4,5,6,7]]
test_x_f4  = test_x[:, [4,5,6,7]]
# 以下的程式碼與上一段的程式碼大同小異
# 大家可以練習看看，但是注意 train_x, train_y, test_x, test_y 的位置要放對哦!
model_f4 = LinearRegression()
model_f4.fit(train_x_f4, train_y)
pred = model_f4.predict(test_x_f4)
# 最後可以看看這次的預測分數如何，與上一段的分數做比較
score = mean_squared_error(test_y, pred)
print("模型評估完測試集的誤差: ", score)
print(np.sqrt(score))