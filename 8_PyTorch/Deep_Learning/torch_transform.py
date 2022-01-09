from torchvision import transforms
import torchvision
import torch

train_transforms = transforms.Compose([
    transforms.RandomCrop(32, padding=4),
    transforms.RandomHorizontalFlip(),
    transforms.ToTensor(),
    transforms.Normalize(
        mean = (0.4914, 0.4822, 0.4465),
        std = (0.2023, 0.1994, 0.2010))])

train_data = torchvision.datasets.CIFAR10(root = "./train/", train = True, transform = train_transforms)
#print(train_data)
#print(train_data.transforms)
data, label = train_data[0]
print(type(data))
print(data.size())
#print(data)
test_transforms = transforms.Compose([
    transforms.ToTensor(),
    transforms.Normalize(
        (0.4914, 0.4822, 0.4465),
        (0.2023, 0.1994, 0.2010))])
    
test_data = torchvision.datasets.CIFAR10(
    root="./test/",
    train = False,
    transform =test_transforms)
#print(test_data)

trainloader = torch.utils.data.DataLoader(train_data, batch_size=16, shuffle = True)
data_batch, labels_batch = next(iter(trainloader))
print(data_batch.size())
print(labels_batch.size())