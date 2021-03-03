#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to join given strings
def combo_string(a, b):
  
  # your code here
   if(len(a)>len(b)):
      longer= a
      short= b
   else:
       longer = b
       short = a
    
   return short+longer+short

#{ 
#Driver Code Starts.
# Driver Code
def main():
    # 
    testcases = int(input())
    
    while(testcases > 0):
        string = input().split()
        string1 = string[0]
        string2 = string[1]
        
        testcases -= 1
        
        print (combo_string(string1, string2))

if __name__ == '__main__':
    main()
#} Driver Code Ends