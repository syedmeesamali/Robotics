from torchvision.datasets import CIFAR10

#Here for me root is the root of current folder with train folder
train_data = CIFAR10(root="./train", train=True) 

#print(train_data)
#print(len(train_data))
#print(train_data.data.shape)
#print(train_data.targets)
#print(train_data.classes)
#print(train_data.class_to_idx)

#print(type(train_data[0]))
#print(len(train_data[0]))
data, label = train_data[0]
