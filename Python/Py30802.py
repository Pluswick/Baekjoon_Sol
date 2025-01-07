import sys
input = sys.stdin.readline
N = int(input().strip())
sizes = list(map(int, input().strip().split()))
T, P = map(int, input().strip().split())
shirts = sum((s + T - 1) // T for s in sizes)
pens = N // P
indiv = N % P
print(shirts)
print(pens, indiv)
