a,b = map(int, input().split())

seq = []
k = 1
while len(seq) < b:
    seq.extend([k] * k) # k를 k번 추가
    k += 1
    
print(sum(seq[a-1:b])) # 0-based index