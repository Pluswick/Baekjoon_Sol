from itertools import combinations

n, m = map(int, input().split())
cards = list(map(int, input().split()))

best_sum = 0
for combo in combinations(cards, 3):
    total = sum(combo)
    if total <= m and total > best_sum:
        best_sum = total

print(best_sum)
