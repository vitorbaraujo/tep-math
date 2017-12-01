f = [0,0,0,0,1]

for i in range(5,1000010):
    f.append(f[i-2] + ((i-2)*(i-3))//2)

while True:
    n = int(input())
    if n < 3:
        break;
    print(f[n])
