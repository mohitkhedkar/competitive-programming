def main():
    tuple1 = tuple(("one", "two", "three"))
    tuple2 = tuple(("1", "2", "3"))
    
    # change value at index 0 of both tuple to string "number"
    # Your code goes here
    mylist = list(tuple1)
    mylist[0] = "number"
    tuple1= tuple(mylist)
    
    mylist1 = list(tuple2)
    mylist1[0] = "number"
    tuple2= tuple(mylist1)
    print(tuple1)
    print(tuple2)
    
    return 0

if __name__ == '__main__':
    main()