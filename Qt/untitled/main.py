from matplotlib import pyplot as plt
import numpy as np
import sys

price = []
types = []


fig = plt.figure(figsize =(10, 7))
plt.pie(price, labels = types)

plt.savefig("D:\\ILYA\\coding\\C++\\Qt\\untitled\\file.png")