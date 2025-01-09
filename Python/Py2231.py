N = int(input())
for i in range(1, N + 1):
    decomposition = i + sum(map(int, str(i)))
    if decomposition == N:
        print(i)
        break
else:
    print(0)
