# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == '__main__':
    m = int(input())
    M = set(input().split())
    n = int(input())
    N= set(input().split())

    print("\n".join(sorted(M^N, key=int)))