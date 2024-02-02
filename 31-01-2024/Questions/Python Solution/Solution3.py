coffee=['Espresso Coffee','Cappuccino Coffee','Latte Coffee']

tea=['Plain Tea','Assam Tea','Ginger Tea','Cardamom Tea','Masala Tea','Lemon Tea','Green Tea','Organic Darjeeling Tea']

soups=['Hot and Sour Soup','Veg Corn Soup','Tomato Soup','Spicy Tomato Soup']

beverages=['Hot Chocolate Drink','Badam Drink','Badam-Pista Drink']

ch=input() #c

item=int(input()) #1

if ch!='c' and ch!='C' and ch!='t' and ch!='T' and ch!='s' and ch!='S' and ch!='b' and ch!='B':
    print('INVALID OPTION')

elif ch=='c' or ch=='C':
    if item<=0 or item>3:
        print('INVALID OPTION')

    else:
        print('Welcome to CCD!')
        print('Enjoy Your ' + str(coffee[item-1])+'!')

elif ch=='t' or ch=='T':
    if item<=0 or item>8:
        print('INVALID OPTION')

    else:
        print('Welcome to CCD!')
        print('Enjoy Your ' + str(tea[item-1])+'!')

elif ch=='s' or ch=='S':
    if item<=0 or item>4:
        print('INVALID OPTION')

    else:
        print('Welcome to CCD!')
        print('Enjoy Your ' + str(soups[item-1])+'!')

elif ch=='b' or ch=='B':
    if item<=0 or item>3:
        print('INVALID OPTION')

    else:
        print('Welcome to CCD!')
        print('Enjoy Your ' + str(beverages[item-1])+'!')
