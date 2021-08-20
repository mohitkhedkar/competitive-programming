from collections import OrderedDict
def main():
    # YOUR CODE GOES HERE
    # Please take input and print output to standard input/output (stdin/stdout)
    # E.g. 'input()/raw_input()' for input & 'print' for output

    my_order = OrderedDict()
    N = int(input())
    for i in range(N):
        itemid, amt = input().split()
        if itemid not in my_order:
            my_order[itemid] = int(amt)
        else:
            my_order[itemid] += int(amt)
    for item_id, tot_amt in my_order.items():
        print (item_id,tot_amt, end = ' ')
        print()


    return 0

if __name__ == '__main__':
    main()