import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'
import tensorflow as tf
import tensorflow as tf
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
import urllib.request
def test():
    dog_cat={0:'a dog', 1:'a cat'}
    test_no = int(input('please input photo number of test data (0~35999): '))
    if 0<=test_no and test_no<=35999:
        plt.imshow(test_x[test_no].reshape(28,28), cmap="gray")
        plt.show()
        plt.clf()
        print(f'it is {dog_cat[np.argmax(test_y[test_no])]}')
        pred = np.argmax(model.predict(test_x[test_no:test_no+1]), axis=-1)
        print(f'predict it is {dog_cat[int(pred)]}')
    else :
        print('Wrong!')
        return test()
if not os.path.exists('cat.npy'):
    urllib.request.urlretrieve('https://storage.googleapis.com/quickdraw_dataset/full/numpy_bitmap/cat.npy', 'cat.npy')
if not os.path.exists('dog.npy'):
    urllib.request.urlretrieve('https://storage.googleapis.com/quickdraw_dataset/full/numpy_bitmap/dog.npy', 'dog.npy')
#將貓、狗的資料集載入至 NumPy 陣列
#dog = np.load('dog.npy',encoding='bytes', allow_pickle=True)
#cat = np.load('cat.npy',encoding='bytes', allow_pickle=True)
dog = np.load('dog.npy')
cat = np.load('cat.npy')
print(dog)
print(dog.shape)
print(dog[0])
print(cat)
print(cat.shape)
print(cat[0])
fig=plt.figure(figsize=(10, 10))
#使用 Matplotlib 來將陣列資料顯示為原始圖檔
columns = 5
rows = 1
for i in range(1, columns * rows + 1):
    img = dog[i].reshape(28,28)
    fig.add_subplot(rows, columns, i)
#    plt.imshow(img)
    plt.imshow(img, cmap='gray')
plt.show()
plt.clf()
sample_size = 60000
#將狗與貓資料合併，成為同一個輸入資料
X = np.concatenate((dog[:sample_size], cat[:sample_size]))
#將資料集資料重塑為原始圖檔的維度，並且將各個元素值除以 255.0 進行正規化 (Normalization)處理
X = X.reshape((-1,28,28,1))/255.0
#X = np.concatenate((dog[:sample_size], cat[:sample_size]))
#X = X / 255.0
#X = X.reshape(-1,28,28,1)
print(X.shape)
Y = np.zeros(2 * sample_size)
Y[sample_size:] = 1.0
print(Y.shape)
train_x, test_x, train_y, test_y = train_test_split(X, Y, random_state=41, test_size=0.3, shuffle=True)
print(train_x.shape)
print(test_x.shape)
#類別標籤轉換為 one hot 編碼 (encoding)
print(f"{train_y[0]} \n{test_y[0]}")
train_y = tf.keras.utils.to_categorical(train_y)
test_y = tf.keras.utils.to_categorical(test_y)
print(f"{train_y[0]} \n{test_y[0]}")
#創建 CNN 類神經網路並訓練模型
model = tf.keras.models.Sequential([tf.keras.layers.Conv2D(filters=32, kernel_size=(3,3), input_shape=(28,28,1), activation='relu'), tf.keras.layers.MaxPooling2D(2,2), tf.keras.layers.Conv2D(64, (3,3), activation='relu'), tf.keras.layers.MaxPooling2D(2,2), tf.keras.layers.Flatten(), tf.keras.layers.Dense(128, activation='relu'), tf.keras.layers.Dense(2,activation='softmax')])
#tf.keras.utils.plot_model(model, show_shapes=True, rankdir='LR')
print(model.summary())
model.compile(loss='categorical_crossentropy', optimizer = 'adam', metrics=['acc'])
history = model.fit(x=train_x, y=train_y, batch_size=256, epochs=20, verbose=1, validation_split=0.2)
plt.plot(history.history['acc'])
plt.plot(history.history['val_acc'])
plt.title('model accuracy')
plt.ylabel('accuracy')
plt.xlabel('epoch')
plt.legend(['train', 'validation'], loc='upper left')
plt.show()
plt.clf()
plt.plot(history.history['loss'])
plt.plot(history.history['val_loss'])
plt.title('model loss')
plt.ylabel('loss')
plt.xlabel('epoch')
plt.legend(['train', 'validation'], loc='upper left')
plt.show()
plt.clf()
model.evaluate(test_x, test_y)

test()
#修正過擬合 (Overfitting) 問題
model2 = tf.keras.models.Sequential([tf.keras.layers.Conv2D(filters=32, kernel_size=(3,3), input_shape=(28,28,1), activation='relu'), tf.keras.layers.MaxPooling2D(2,2), tf.keras.layers.Dropout(0.2), tf.keras.layers.Conv2D(64, (3,3), activation='relu'), tf.keras.layers.MaxPooling2D(2,2), tf.keras.layers.Dropout(0.2), tf.keras.layers.Flatten(), tf.keras.layers.Dense(128, activation='relu', kernel_regularizer=tf.keras.regularizers.l2(0.01)), tf.keras.layers.Dropout(0.2), tf.keras.layers.Dense(2, activation='softmax')])
model2.compile(loss='categorical_crossentropy', optimizer = 'adam', metrics=['acc'])
history = model2.fit(x=train_x, y=train_y, batch_size=256, epochs=50, verbose=1, validation_split=0.2)
plt.plot(history.history['acc'])
plt.plot(history.history['val_acc'])
plt.title('model accuracy')
plt.ylabel('accuracy')
plt.xlabel('epoch')
plt.legend(['train', 'validation'], loc='upper left')
plt.show()
plt.clf()
plt.plot(history.history['loss'])
plt.plot(history.history['val_loss'])
plt.title('model loss')
plt.ylabel('loss')
plt.xlabel('epoch')
plt.legend(['train', 'validation'], loc='upper left')
plt.show()
plt.clf()
model.evaluate(test_x, test_y)
test()
if os.path.exists('cat.npy'):
    os.remove('cat.npy')
if os.path.exists('dog.npy'):
    os.remove('dog.npy')