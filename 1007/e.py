l1 = [1]
l2 = [1,1]

def pr(l):
    s = ' '.join([str(x) for x in l])
    print(s)
    return s

pr(l1)
pr(l2)

while 1:
    l1 = l2
    temp = [1]
    for i in range(1, len(l1)):
        temp.append(l1[i] + l1[i-1])
    temp.append(1)
    pr(temp)
    l2 = temp
    if not all(i < 10**60 for i in l2):
        break
