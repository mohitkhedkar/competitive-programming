from collections import Counter

def main():
    # YOUR CODE GOES HERE
    # Please take input and print output to standard input/output (stdin/stdout)
    # E.g. 'input()/raw_input()' for input & 'print' for output
    n = input()
    choco = Counter(map(int,input().split()))
    m = int(input())
    earnings=0
    for i in range(m):
        X,desiredchoco = map(int,input().split())
        if desiredchoco in choco and choco[desiredchoco]>0:
            choco[desiredchoco] -=1
            earnings +=X
    
    print(earnings)

    

    return 0

if __name__ == '__main__':
    main()