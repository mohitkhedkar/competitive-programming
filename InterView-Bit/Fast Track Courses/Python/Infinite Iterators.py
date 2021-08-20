import itertools
def main():
    # print 1000 space separated integers starting from 1000 with common difference 500
    # 1000 1500 2000 2500 3000........
    # There should be exactly one space after every integer
    # print all uppercase alphabets 15 times, printing from A-Z then repeating again
    # A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D........
    # There should be exactly one space after every character
    # print list of integers containing 1000 4's
    

    cnt = 0
    for i in itertools.count(1000,500):
        if cnt == 1000:
            break
        else:
            print(i,end = " ")
            cnt += 1
    print()
            
    cnt = 0   
    for i in itertools.cycle("ABCDEFGHIJKLMNOPQRSTUVWXYZ"):
        if cnt >= 390:
            break
        else:
            print(i,end = " ")
            cnt += 1
    print()


    print([4]*1000)

    return 0

if __name__ == '__main__':
    main()