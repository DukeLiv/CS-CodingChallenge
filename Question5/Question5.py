def solution(cutoffScore, scoresLength, scores):
    # Write solution here
    return 0

def main():
    cutoffScore = int(input().split()[0])
    scoresLength = int(input().split()[0])
    scores = [int(x) for x in input().split()]
    answer = solution(cutoffScore, scoresLength, scores)
    print(answer)

if __name__ == "__main__":
    main()
