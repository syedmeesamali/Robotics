from PIL import Image
import torch
import os
from torchvision import transforms, models
img = Image.open(r'D:/repos/Robotics/8_PyTorch/Deep_Learning/tiger.jpg')
print(img)

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
model = models.alexnet(pretrained=True)

device = "cpu"
model.eval()
model.to(device)
y = model(batch.to(device))

filename = "imagenet-labels.txt"
f = open(os.path.join(os.path.dirname(__file__), filename))
classes = [line.strip() for line in f.readlines()]

#imagenet-labels files is locally downloaded and saved
#with open('imagenet-labels.txt') as f:
    

prob = torch.nn.functional.softmax(y, dim=1)[0] * 100
_, indices = torch.sort(y, descending=True)
for idx in indices[0][:5]:
    print(classes[idx], prob[idx].item())