T = int(input())
for _ in range(T):
    H, W, N = map(int, input().split())
    floor = (N - 1) % H + 1  # 층 번호
    room = (N - 1) // H + 1  # 방 번호
    print(f"{floor}{room:02}")  # 방 번호 형식 맞추기
