#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to print list 
# print elements in required fashion
def print_elements(n, arr):
    
    # Your code here 
    # use '//' to divide to get int for index
    for i in range(0,n//2):
        print(arr[i],end=" ")
    for i in range(n//2,n,3):
        print(arr[i],end=" ")
    

#{ 
#Driver Code Starts.
# Driver Code
def main():
    
    # Testcase input
    testcases = int(input())
    
    # Looping through testcases
    while(testcases > 0):
        # size of array
        size_array = int(input())
        
        # array elements input
        array = input().split()
        # print (array)
        arr = list()
        for i in array:
            arr.append(int(i))
            
        # print (arr)
        
        # calling function to print elements
        print_elements(size_array, arr)
        print ()
        testcases -= 1
 
if __name__ == '__main__':
    main()
#} Driver Code Ends