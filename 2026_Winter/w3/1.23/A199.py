n = int(input())

for i in range(n):
    if i%2 == 0: # even
        print('* '*n)
    else: # odd
        print(' *'*n)