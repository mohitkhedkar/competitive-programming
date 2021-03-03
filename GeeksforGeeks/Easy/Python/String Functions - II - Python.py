#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to check if string 
# starts and ends with 'gfg'
def gfg(a):
    b = a.lower()
    if(b.startswith('gfg') and b.endswith('gfg')):  
        print ("Yes")
    else:
        print ("No")

#{ 
#Driver Code Starts.
# Driver Code
def main():
    # testcase input
    testcases = int(input())
    
    # looping through testcases
    while(testcases > 0):
        string = input()
        
        testcases -= 1
        
        gfg(string)

if __name__ == '__main__':
    main()
#} Driver Code Ends