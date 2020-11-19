# 從 sklearn 載入 breast_cancer 資料集
from sklearn.datasets import load_breast_cancer
# 載入我們會用到的模型，KNN分類模型
from sklearn.neighbors import KNeighborsClassifier
# 載入切分資料集成訓練集及測試集的套件，train_test_split
from sklearn.model_selection import train_test_split
# 載入資料集，放到 my_data變數內
my_data = load_breast_cancer()
# 可以把 my_data 給印出來，看一下裡面的內容
# 印出來後可知他有幾個 key name有："data","target","target_names","DESCR","filename" ...等
print(my_data)
# 更多關於此資料集的敘述可以到官網瀏覽
# https://scikit-learn.org/stable/modules/generated/sklearn.datasets.load_breast_cancer.html
print(my_data.keys())
# 觀察資料筆數
print("資料筆數:")
print(my_data.data.shape)
print("\n")
# 觀察我們第一筆的資料內容
print("第一筆的資料內容:")
print(my_data.data[0])
print("\n")
# 觀察我們第一筆的分類目標
print("第一筆的分類目標:")
print(my_data.target[0])
print("\n")
# 觀察我們要預測目標的名稱種類
print("預測目標的名稱種類，分別是惡性腫瘤及良性腫瘤:")
print(my_data.target_names)
print("\n")
# 我們將資料切分成兩組，把80%當成訓練集，20%當成測試集
# (train_x, train_y) 為80%的訓練集，用來訓練模型
# (test_x , test_y ) 為20%的測試集，用來驗證模型的預測能力
train_x, test_x, train_y, test_y = train_test_split(my_data.data, my_data.target, test_size= 0.2, random_state=18, shuffle=True)
# 可以看一下這些資料集的維度，驗證沒有切錯
print("原始資料集的維度大小:" ,my_data.data.shape)
print("訓練集的維度大小:   " ,train_x.shape)
print("測試集的維度大小:   " ,test_x.shape)
# 把預先載入好的套件KNN分類器拿出來使用，並且存到變數my_model中
my_model = KNeighborsClassifier()
# 訓練模型，放入要訓練的訓練集(train_x, train_y)
my_model.fit(train_x, train_y)
# 訓練完模型後，我們就可以用 my_model.score 來評估模型的能力
test_score = my_model.score(test_x, test_y)
print("模型評估完測試集的準確度為: ", test_score)