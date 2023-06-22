# # --------variables--------
# firstName = "uday"
# lastName = "sharma"
# name = firstName + " " + lastName

# print("hello " + name)

# # ------------updation and typecasting
# print("\n")
# age = 19
# age = age + 1
# age += 1

# print("your age is: " + str(age))  # expected 21
# print("the type of age is: " + str(type(age)))

# # strings arent used for math operations hence we use typecasting

# # ------------booleans
# print("\n")
# human = True
# print("Am I a human: " + str(human))

# # ------------multiple assignment
# print("\n")
# name, age, attractive = "uday", 19, True
# age1 = age2 = 19
# print(name, age, attractive, age1, age2)

# # ------------string functions
# print("\n")
# name = "uday Sharma"
# print(len(name))
# print(name.find("r"))
# print(name.find("rm"))  # also returns the beginning point of a substring
# print(name.capitalize())  # capitalises first word's first letter while ALSO decapitalising the other words
# print(name.upper())
# print(name.lower())
# print(name.isdigit())  # retuns true iff all chars are digits
# print(name.isalpha())
# print(name.count("a"))  # returns number of chars in variable that match the argument
# print(name.replace("a", "x"))
# print(name * 3)

# # ------------typecasting

# #--------user input--------
# print("\n")
# fullName = input("what is your name: ")
# print("hello "+fullName)

# Age = int(input("what's your age: ")) #classical note: always typecast input going to an interger valued type variable
# print("your age is: "+str(Age)) #typecast needed as 'your age is' is a string

# #--------math functions--------
# import math #whatever functions use math as an object use this import
# pi = 3.14
# print(round(pi))
# print(math.ceil(pi))
# print(math.floor(pi))
# print(abs(pi))
# print(pow(pi, 2))
# print(math.sqrt(pi))

# x, y, z = 1, 2, 3
# print("max = " + str(max(x, y, z)), "min = " + str(min(x, y, z)))

#--------string slicing--------
# two ways to do it:
#     1. indexing[]
#     2. slice function
name = "uday sharma"
firstName = name[0:4] #[start:end(exclusive):step]
print(firstName)
lastName = name[5:12] #ending index is exclusive so we must put (desired index + 1)
print(lastName)

butcheredName = name[::2] #no arguments means 0:(max_index)
print("butchered name: "+butcheredName)

reversedName = name[::-1]
print("reversed name: "+reversedName)

#problem: extracting website name
website = input("input website name: ") #for example https://www.google.com is inputted
slice_variable = slice(12, -4) 
#max index is also taken as zero and mentioning a negative index means refering to an index of that magnitude from the right
print(website[slice_variable])