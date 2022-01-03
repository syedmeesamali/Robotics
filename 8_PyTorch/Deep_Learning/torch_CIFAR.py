from torchvision.datasets import CIFAR10

#Here for me root is the root of current folder with train folder
train_data = CIFAR10(root="./train", train=True)
data, label = train_data[0]
print(type(data))
print(data)

test_data = CIFAR10(root="./test/", train=False)
print(test_data)
print(len(test_data))
print(test_data.data.shape)