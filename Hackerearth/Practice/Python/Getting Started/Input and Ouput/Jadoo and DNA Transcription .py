
# Write your code here
x=input()
for i in x:
    if i!="G" and i!="C" and i!="T" and i!="A":
        print("Invalid Input")
        exit()

for i in x:
    if i=="G":
        print("C",end="")

    if i=="C":
        print("G",end="")
    
    if i=="T":
        print("A",end="")
    
    if i=="A":
        print("U",end="")