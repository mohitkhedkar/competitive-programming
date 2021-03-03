#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

##Write the function completely
def isPrime(n):
    if(n==0 or n==1):
        return False
    z=int(n**0.5)
    for i in range(2,z+1):
        if n%i==0:
            return False
    return True

#{ 
#Driver Code Starts.


import math ##You will need this for prime checking

    

def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        number=int(input())
        print(isPrime(number)) ##This isPrime is function that you need to create
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends