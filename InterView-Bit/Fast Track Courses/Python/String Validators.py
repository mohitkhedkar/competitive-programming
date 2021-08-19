def main():
    S = input()
    #Your code goes here
    print(any(c.isalnum() for c in S))
    print(any(c.isalpha() for c in S))
    print(any(c.isdigit() for c in S))
    print(any(c.islower() for c in S))
    print(any(c.isupper() for c in S))

    
    
    return 0

if __name__ == '__main__':
    main()