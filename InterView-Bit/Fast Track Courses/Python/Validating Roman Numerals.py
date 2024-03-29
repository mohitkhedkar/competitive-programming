import re

def main():
    # YOUR CODE GOES HERE
    # Please take input and print output to standard input/output (stdin/stdout)
    # E.g. 'input()/raw_input()' for input & 'print' for output
    n = int(input())
    
    for i in range(n):
        i = input()
        if re.search(r"^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$",i):
            print("YES")
        else:
            print("NO")
    return 0


if __name__ == '__main__':
    main()