import fileinput as f

for l in f.input():
    ns=[int(x) for x in l.split()[:-1]]

    if len(ns)==0:
        break

    ns = sorted(ns)

    res=1
    
    start=1
    end=abs(ns[0])

    while start < end:
        mid=(start+end)//2


    for mod in reversed(range(1,abs(ns[0])+1)):
        ok=True
        rem=ns[0]%mod
        vv=set([n%mod for n in ns])
        if len(vv)==1:
            res=mod
            break
    print(res)
