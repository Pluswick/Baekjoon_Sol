import sys

# 입력받기
input = sys.stdin.read
n, *numbers = map(int, input().split())

# 정렬
numbers.sort()

# 출력
sys.stdout.write('\n'.join(map(str, numbers)) + '\n')
