import re

def main():
    txt = "The quick brown fox jumps over the lazy dog"
    
    # print the list of 'o' present in the string txt
    x = re.findall("o",txt)
    print(x)
    # print the index of first occurrence of 'h' in the string txt using search function
    x=re.search("h",txt)
    print(x.start())
    # convert the first 3 white-space character into '#' and print the changed txt
    x = re.sub("\s","#",txt, 3)
    print(x)
    return 0

if __name__ == '__main__':
    main()