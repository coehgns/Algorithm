import sys

n = int(sys.stdin.readline())

num = 0
length = 1
start = 1

while start <= n:
    end = min(start * 10 - 1, n)  
    num += (end - start + 1) * length
    start *= 10  
    length += 1  

sys.stdout.write(str(num))
