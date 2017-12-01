# l, r = [int(x) for x in input().split()]
#
# pots = []
#
# for i in reversed(range(1, 62)):
#     pots.append(2 ** i)
#
# ok = False
#
# for pot in pots:
#     if pot <= r and pot >= l:
#         print(pot ^ (pot-1))
#         ok = True
#         break
#
# if not ok:
#     print(0)

l, r = ['{:061b}'.format(int(x)) for x in input().split()]

pot = 0
for i in range(61):
    if l[i] != r[i]:
        pot = 61 - i
        break

if pot == 0:
    print(0)
else:
    print((2**pot - 2) ^ 1)
