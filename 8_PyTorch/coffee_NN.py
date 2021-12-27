import matplotlib.pyplot as plt
from PIL import Image

img = Image.open('coffee.jpg')
#plt.imshow(img)
#plt.show()

import torch
from torchvision import transforms
transform = transforms.Compose([
    transforms.Resize(256),
    transforms.CenterCrop(224),
    transforms.ToTensor(),
    transforms.Normalize(
        mean = [0.485, 0.456, 0.406],
        std = [0.229, 0.224, 0.225]
    )
])

img_tensor = transform(img)
batch = img_tensor.unsqueeze(0)

from torchvision import models
import urllib
#Alexnet is most famous image classification model and we will use pre-trained model

model = models.alexnet(pretrained=True)

device = "cpu"
model.eval()
model.to(device)
y = model(batch.to(device))
print(y.shape)
y_max, index = torch.max(y, 1)
print(index, y_max)

url = 'https://pytorch.tips/imagenet-labels'
fpath = 'imagenet_class_labels.txt'
urllib.request.urlretrieve(url, fpath)
with open ('imagenet_class_labels.txt') as f:
    classes = [line.strip() for line in f.readlines()]

print(classes[967])