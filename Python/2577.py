a = int(input())
b = int(input())
c = int(input())

result = str(a * b * c)  # 숫자를 문자열로 변환
for i in range(10):
    print(result.count(str(i)))  # 각 숫자의 개수를 세서 출력
