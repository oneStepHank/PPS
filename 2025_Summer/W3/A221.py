N = int(input())

res = []
for i in range(N):
    num = input()
    if int(num[-1])%2==0:
        res.append('even')
    else:
        res.append('odd')
        
for item in res:
    print(item)