n = int(input())
nums = list(map(int, input().split()))
print(sum(all(num % i != 0 for i in range(2, int(num**0.5) + 1)) and num > 1 for num in nums))
