def solution(P, L):
    # Write solution here
    return 0

def main():
    P = []
    L = int(input())
    for i in range(0, L):
        str = input()
        P.append(str)
    answer = solution(P, L)
    print(answer)

if __name__ == "__main__":
    main()
