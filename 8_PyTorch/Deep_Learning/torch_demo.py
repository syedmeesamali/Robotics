import torch
x = torch.tensor([[1, 2, 3], 
                 [4, 5, 6]])
y = torch.tensor([[7, 8, 9], 
                 [10, 11, 12]])
z = x + y
#print(z)
#print(z.size())

#print(z[1,2])
#print(torch.rand(2,2).max().item())

r = torch.tensor([[2,3,4], [5,6,7]], dtype=torch.float, requires_grad=True)
print(r)
f = r.pow(3).sum() # f = r^3
print(f)
f.backward()
print(r.grad)  # df/dx = 3*x
