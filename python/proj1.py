i=1
while i<5:
    n=int(input("enter a number"))
    if i==1:
        c=n
    if n>c:
        c=n
    i+=1
            
# c=n
# if n>c:
#     c=n

print("the largest number is",c)