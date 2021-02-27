#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

#Function to find if number is present in the list or not
def number_present(num, query):
    #num is a 'list', query is a 'int'
    for i in range(len(num)):    #write this here - i in range(len(num))
                             # see the use of 'in' in for loop
        if (num[i] is query) : #write this here - num[i] is query
                             # see the use of 'is' as equal to
            return True
    return False 

#{ 
#Driver Code Starts.
def main():
    testcases = int(input())
    while testcases :
        num = input()
        num = num.split()
        for i in range(len(num)):
            num[i] = int(num[i])
        
        q = input()
        q = q.split()
        for i in range(len(q)):
            q[i] = int(q[i])
            
        for i in range(len(q)):
            if number_present(num, q[i]):
                print("True")
            else:
                print("False")
        testcases-=1

if __name__ == '__main__' :
    main()
#} Driver Code Ends