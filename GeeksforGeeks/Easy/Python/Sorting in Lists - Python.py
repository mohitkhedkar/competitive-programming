#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to sort using comparator
def customSort(arr):
    
    # Your code here
    # Hint : Should be a return statement
    return sorted(arr)

#{ 
#Driver Code Starts.
    
# Driver Code
def main():
    
    # Testcase input
    testcases = int(input())
    
    # Looping through testcases
    while(testcases > 0):
        size_arr = int(input())
        
        name = input().split()
        marks = input().split()
        arr = list()
        for i in range(0, size_arr, 1):
            arr.append((name[i], marks[i]))
        
        arr.sort(key = customSort)
        
        for i in arr:
            print (i[0], i[1], end = " ")
        
        print ()
        testcases -= 1
 
if __name__ == '__main__':
    main()
#} Driver Code Ends