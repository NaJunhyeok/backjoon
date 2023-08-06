K = int(input())

a = list()

for _ in range(K):
    k = int(input())
    if k == 0:
        a.pop()
    else:
        a.append(k)
print(sum(a))