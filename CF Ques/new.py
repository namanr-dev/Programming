f=open("diary.txt",'w')
f.write("hello aaaaaaaaaaaaaaaa dfsdgsd")
f.close()

def any():
    f=open("diary.txt",'r')
    s=f.read()
    w=s.split()
    count=0   
    for i in w:
        if len(i)<4:
            count=count+1
    print("the no of words more than 4 character are",count)
any()