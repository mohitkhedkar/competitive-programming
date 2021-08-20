import re
def main():
    # YOUR CODE GOES HERE
    # Please take input and print output to standard input/output (stdin/stdout)
    # E.g. 'input()/raw_input()' for input & 'print' for output

    n = int(input())
    for i in range(n):
        i = input()
        if re.search(r"^[6789]\d{9}$",i):
            print("YES")
        else:
            print("NO")

    return 0

if __name__ == '__main__':
    main()