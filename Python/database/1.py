import matplotlib.pyplot as plt
x = [29.94387097, 30.33935484, 30.08451613, 28.67806452, 29.61935484, 22.17096774,
     30.17677419, 30.12709677, 29.9516129, 24.7483871, 30.23806452, 23.42]
y = [35, 35, 34, 40, 71, 1079, 354, 36, 25.1, 607.1, 5.3, 837.6]
txt = ['天母', '石牌', '松山', '文山', '信義', '大屯山', '內湖', '士林', '社子', '竹子湖', '台北', '鞍部']
plt.rcParams['font.sans-serif'] = ['Microsoft JhengHei']
plt.scatter(x, y)
for i in range(len(x)):
    plt.annotate(txt[i], xy=(y[i], x[i]), xytext=(y[i], x[i]))
plt.show()
