from itertools import permutations

def main():
    # YOUR CODE GOES HERE
    # Please take input and print output to standard input/output (stdin/stdout)
    # E.g. 'input()/raw_input()' for input & 'print' for output
    S,K = input().split()
    
    for i in permutations(sorted(S),int(K)):
        print("".join(i))



    return 0

if __name__ == '__main__':
    main()