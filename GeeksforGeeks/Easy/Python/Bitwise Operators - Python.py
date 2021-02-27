#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3


def bitwise(a,b, c):
    d=a^a
    e=c^b
    f=a & b
    g=c |(a^a)
    h= ~e
    
    print(d)
    print(e)
    print(f)
    print(g)
    print(h)

#{ 
#Driver Code Starts.



def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        a=int(input())
        b=int(input())
        c=int(input())
        bitwise(a,b,c)
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends