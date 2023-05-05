def solution(N, M, P):
    is_sorted = True
    index = 0
    sum = P[index]

    for i in range(N - 1):
        if P[i] > P[i + 1]:
            is_sorted = False
            break

    if is_sorted: return 1

    while index < N and sum <= M:
        for i in range(index + 1):
            if P[i] > P[i + 1]:
                P[i], P[i + 1] = P[i + 1], P[i]

        index += 1
        sum += P[index]

    for i in range(N - 1):
        if P[i] > P[i + 1]:
            return 0

    return 1

def main():
    N, M = map(int, input().split())
    P = list(map(int, input().split()))
    answer = solution(N, M, P)
    print(answer)

if __name__ == "__main__":
    main()
