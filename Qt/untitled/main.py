from matplotlib import pyplot as plt
import pathlib

path1 = pathlib.Path(__file__).parent.resolve()


file = open((str(path1) + '/file.txt'),'r', encoding="utf-8")

path = open((str(path1) + '/path.txt'), 'w')
path.write(str(path1))
path.close()

s = ""

for i in file.read():
    if i != "\n":
        s += i
    else:
        s += " "

arr = list(s.split())

types1 = []
price1 = []

for i in range(len(arr)):
    if i % 2 == 0:
        types1.append(arr[i].upper())
    else:
        price1.append(float(arr[i]))

types = list(set(types1))
price = []

for i in range(len(types)):
    s = 0
    for j in range(len(types1)):
        if types[i] == types1[j]:
            s += price1[j]
    price.append(s)

fig = plt.figure(figsize =(10, 7))
plt.pie(price, labels = types)

plt.savefig(f"{path1}/file.png")

file.close()