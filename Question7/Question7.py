from typing import List

def solution(n: int, l: int, transfers: List[List[int]]) -> bool:
    # Write solution here
    return False

def main():
    n, l = [int(x) for x in input().split(" ")]
    transfers = []
    for i in range(l):
        line = input().split(" ")
        transfers.append([int(line[0]), int(line[1])])  
    answer = solution(n, l, transfers)
    print("Ineligible" if answer else "Eligible")

if __name__ == "__main__":
    main()
