def solution(n, employees, shifts):
    # Write solution here
    return 0

def main():
    n = int(input())
    employees = input().split(' ')
    shifts = []
    for i in range(n):
        line = input().split(' ')
        shifts.append([int(line[0]), int(line[1])])
    solution(n, employees, shifts)

if __name__ == "__main__":
    main()
