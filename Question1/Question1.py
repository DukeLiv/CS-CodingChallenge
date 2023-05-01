def solution(n):
    even = 0
    odd = 0

    for i in range(1, int(n ** 0.5) + 1):
        if (n % i == 0):
            if (i % 2 == 0): even += 1
            else: odd += 1

            if ((n / i) % 2 == 0): even += 1
            elif (n / i != i): odd += 1
    
    if (even > odd): return "BUY"
    elif (even < odd): return "SELL"
    else: return "PASS"

def main():
    n = int(input())
    answer = solution(n)
    print(answer)

if __name__ == "__main__":
    main()
