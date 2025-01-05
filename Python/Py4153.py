while True:
    a, b, c = map(int, input().split())
    if a == 0 and b == 0 and c == 0:
        break

    # 가장 긴 변이 c가 되도록 정렬
    a, b, c = sorted([a, b, c])

    # 직각삼각형 판별
    if a**2 + b**2 == c**2:
        print("right")
    else:
        print("wrong")
