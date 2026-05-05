import sys

total = 0
n = 0

for line in sys.stdin:
    a, b, c = map(int, line.split())
    
    # 先檢查非正數
    if (a <= 0 or b <= 0 or c <= 0):
        break
    
    i = n % 3
    if i == 0:
        val = a
    elif i == 1:
        val = b
    else:
        val = c
    
    total += val
    n += 1

print(total)