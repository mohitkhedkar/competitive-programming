#{ 
#Driver Code Starts
#Initial Template for Python 3






import re

 # } Driver Code Ends
#User function Template for python3

def validate(str):
    pat= re.compile('[a-z]+[!@#$%]+[1-9]+')##your pattern here
    match=re.search(pat,str)
    if(match):
        return True
    else:
        return False



#{ 
#Driver Code Starts.

def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        mystr=input()
        print(validate(mystr))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends