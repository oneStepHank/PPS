kda = input()
kda_list = [int(s) for s in kda.split('/')]

if (kda_list[0] + kda_list[2]) < kda_list[1] or kda_list[1] == 0: 
    print('hasu')
else :
    print('gosu')
