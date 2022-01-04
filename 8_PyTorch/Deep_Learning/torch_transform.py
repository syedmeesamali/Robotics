from torchvision import transforms
import torchvision

train_transforms = transforms.Compose([
    transforms.RandomCrop(32, padding=4),
    transforms.RandomHorizontalFlip(),
    transforms.ToTensor(),
    transforms.Normalize(
        mean = (0.4914, 0.4822, 0.4465),
        std = (0.2023, 0.1994, 0.2010))])

train_data = torchvision.datasets.CIFAR10(root = "./train/", train = True, transform = train_transforms)
print(train_data)