#--------if-------- 
age = int(input("input age: "))

if age>= 18:
    print("you're an adult")
elif age<0:
    print("invalid input")
# elif age>0 and age<18:            #this can be used too but keep in mind, no checks must be given after the else statement
    # print("you're a child")
else:
    print("you're a child")