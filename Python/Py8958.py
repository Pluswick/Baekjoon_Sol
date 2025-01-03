n = int(input())

for _ in range(n):
    result = input()
    score = sum(len(seq) * (len(seq) + 1) // 2 for seq in result.split('X'))
    print(score)
