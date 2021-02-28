#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3


def multiplicationTable(N):## in is a membership operator that is true if something is a member of sequence
    for i in range(N,N*11,N): ## i in range(x,y,z) means i goes from x to y-1 and increments z steps in each iteration
        print(i, end=" ") ## Separating by spaces using end =" "
        

#{ 
#Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        numbah=int(input())
        multiplicationTable(numbah)
        print()
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends