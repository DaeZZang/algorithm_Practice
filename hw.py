for i in range(1, 100) :
    flag=i%2;
    s = str(i)
    count = 0
    for x in s:
        if (x=='3') or (x=='6') or (x=='9') :
            count += 1
    if count == 0 :
        print(i, end=' ')
    else :
        if(flag):
            print('(홀)', end=' ')
        else:
            print('('+count*'짝'+')', end=' ')