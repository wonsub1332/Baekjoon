alp=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
string=""

def check():
    for i in alp:
        if(stirng.count(i)>1):
            return 1
    return 0


num=int(input(""))
count=0

for i in range(0,num):
    string=input("")
    count+check(string)

print(count)
