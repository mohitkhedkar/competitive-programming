#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def cat_hat(str):
  ##your code here##
  ##You need to write complete code this time 
    hat = str.count("hat")
    cat = str.count("cat")
    if (hat == cat):
        return "True"
    else :
        return "False"
        
            

#{ 
#Driver Code Starts.




def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        mystr=input()
        print(cat_hat(mystr))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends