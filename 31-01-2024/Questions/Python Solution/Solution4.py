def Chain_Marketing_Sales(parent, ch):
    if ch == 'N':
        print('TOTAL MEMBERS:1')
        print('COMMISSION DETAILS')
        print(parent + ':250 INR')

    else:
        child = input().split(',')
        print('TOTAL MEMBERS:', len(child) + 1)
        print('COMMISSION DETAILS')
        print(parent + ':' + str(len(child) * 500) + ' INR')

        for i in child:
            print(i + ':250 INR')

parent = input()
ch = input()

out_ = Chain_Marketing_Sales(parent, ch)
print(out_)