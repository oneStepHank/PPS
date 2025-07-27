import sys
from collections import Counter

N=int(input())

lst=[]
for _ in range(N):
    c=int(sys.stdin.readline())
    lst.append(c)

lst.sort()

print(round(sum(lst)/len(lst)))
print(lst[len(lst)//2])

cnt=Counter(lst).most_common(2)
# print(cnt)
if len(lst)==1:
    print(*lst)
else:
    if cnt[0][1]==cnt[1][1]:
        print(cnt[1][0])
    else:
        print(cnt[0][0])
print(max(lst)-min(lst))