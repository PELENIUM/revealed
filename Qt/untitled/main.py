from matplotlib import pyplot as plt

file = open('D:\\ILYA\\coding\\C++\\source\\revealed\\Qt\\untitled\\file.txt','r', encoding="utf-8")

s = ""

for i in file.read():
    if i != "\n":
        s += i
    else:
        s += " "

arr = list(s.split())

types = []
price = []

for i in range(len(arr)):
    if i % 2 == 0:
        types.append(arr[i])
    else:
        price.append(int(arr[i]))

fig = plt.figure(figsize =(10, 7))
plt.pie(price, labels = types)

plt.savefig("file.png")

file.close()