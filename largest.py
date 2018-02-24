a=int(input("enter the first number: "))
b=int(input("enter the second number: "))
c=int(input("enter the third number: "))
def largest():
    if a>b and a>c :
        print("the largest number is",a)
    elif b>=a and b>=c :
        print ("the largest number is",b)
    elif c>=a and c>=b :
        print("the largest number is",c)
    

largest() 
    
