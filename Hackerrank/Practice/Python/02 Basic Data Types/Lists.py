n = int(input())
list1 = []
for _ in range(n):
    s = input().strip().split(' ')
    cmd = s[0]
    args = s[1:]
    if cmd != "print":
        cmd += "("+",".join(args)+ ")"
        eval("list1."+cmd)
    else:
        print(list1)