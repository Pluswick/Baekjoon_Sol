# 단어의 개수 N 입력
N = int(input())
words = set()  # 중복 제거를 위해 set 사용

# N개의 단어 입력
for _ in range(N):
    words.add(input().strip())

# 단어 정렬: (길이, 단어) 기준으로 정렬
sorted_words = sorted(words, key=lambda x: (len(x), x))

# 정렬된 단어 출력
for word in sorted_words:
    print(word)
