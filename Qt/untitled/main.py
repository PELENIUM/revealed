import os
from matplotlib import pyplot as plt
import numpy as np
import sys

price = [int(sys.argv[1])]
types = [sys.argv[2]]

fig = plt.figure(figsize =(10, 7))
plt.pie(price, labels = types)

os.mkdir("img")
plt.savefig("img/file.png") 