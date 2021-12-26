import urllib.request
url = url = 'https://pytorch.tips/coffee'
fpath = 'coffee.jpg'
urllib.request.urlretrieve(url, fpath)

import matplotlib.pyplot as plt
from PIL import Image
img = Image.open('coffee.jpg')
plt.imshow(img)
plt.show()
