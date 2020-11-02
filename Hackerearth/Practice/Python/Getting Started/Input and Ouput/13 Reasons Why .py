# Write your code here
a,b,c=map(int,input().split(" "));

d=a;
a=b;
b=d; #swap
a*=c;   #multiply
b+=c; #add

print(a,b)