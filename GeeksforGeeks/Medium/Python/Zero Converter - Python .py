#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def pos(n):
    ## Write the code
    while(n> 0):
        n-=1
        print(n,end= " ")
    
    
def neg(n):
    ##Write the code
    while(n<= 0):
        print(n,end= " ")
        n+=1
    
    

#{ 
#Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        numbah=int(input())
        if(numbah>0):
            pos(numbah)
        elif(numbah<0):
            neg(numbah)
        else:
            print("already Zero",end="")
        print()
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends