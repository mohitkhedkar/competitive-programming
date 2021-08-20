from collections import defaultdict

def main():
    A = input().split()
    N = len(A)
    B = input().split()
    M = len(B)
    # Your code goes here
    
    d = defaultdict(list)
    for i in range(N):
        d[A[i]].append(i)
    for i in B:
        if(len(d[i]) == 0):
            print(-1)
        else:
            for j in d[i]:
                print (j, end = ' ')
            print()

    return 0

if __name__ == '__main__':
    main()