def main():
    str_list = ['given', 'intern', 'InterviewBit', 'network', 'local', 'multiple', 'define', 'nodes', 'algorithm', 'allows', 'community', 'phase', 'single']
    my_list = []
    for i in range(0 , len(str_list)) : 
        if len(str_list[i])%2 == 1: 
            my_list.append(str_list[i]) 
            i=i+1 
    
    print(my_list)
    return 0

if __name__ == '__main__':
    main()