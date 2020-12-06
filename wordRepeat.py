a=int(input())

for i in range(0,a):
    temp = input().split()
    n=int(temp[0])


    for k in range(0,len(temp[1])):
        for j in range(0,n):
            print(temp[1][k],end='')
