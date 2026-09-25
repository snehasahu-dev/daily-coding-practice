m1=int(input("enter marks in subject 1: "))
m2=int(input("enter marks in subject 2: "))
m3=int(input("enter marks in subject 3: "))
if (m1+m2+m3) / 3 < 40:
    print("fail")
elif m1<33 or m2<33 or m3<33:
    print("fail")
else:
    print("pass")