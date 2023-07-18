# # --------------------------------variables--------------------------------
# firstName = "uday"
# lastName = "sharma"
# name = firstName + " " + lastName

# print("hello " + name)

# # --------------------------------updation and typecasting--------------------------------
# age = 19
# age = age + 1
# age += 1

# # strings arent used for math operations hence we use typecasting
# print("your age is: " + str(age))
# print("the type of age is: " + str(type(age)))

# # --------------------------------booleans--------------------------------
# human = True
# print("am I a human: " + str(human))

# # --------------------------------multiple assignment--------------------------------
# name, age, attractive = "uday", 19, True
# age1 = age2 = 19
# print(name, age, attractive, age1, age2)

# # --------------------------------string functions--------------------------------
# name = "uday Sharma"
# print(len(name))
# print(name.find("r"))
# print(name.find("rm"))  # returns the beginning index of a substring
# print(name.capitalize())  # capitalises first word's first letter while ALSO ***decapitalising the other words***
# print(name.upper())
# print(name.lower())
# print(name.isdigit())  # retuns true iff all chars are digits
# print(name.isalpha())   # returns true iff all chars are alphabets
# print(name.count("a"))  # returns number of chars in variable that match the argument
# print(name.replace("a", "x"))
# print((name + " ") * 3)

# # --------------------------------typecasting--------------------------------

# --------------------------------user input--------------------------------
# fullName = input("what is your name: ")
# print("hello " + fullName)

# Age = int(input("what's your age: ")) # classical note: always typecast input going to an interger valued type variable
# print("your age is: "+str(Age))

# --------------------------------math functions--------------------------------
# whatever functions use 'math' as an object use this import
# import math 
# pi = -3.14
# print(math.ceil(pi))
# print(math.floor(pi))
# print(math.sqrt(abs(pi)))
# print(round(pi))
# print(abs(pi))
# print(pow(pi, 2))

# x, y, z = 1, 2, 3
# print("max = " + str(max(x, y, z)), "\nmin = " + str(min(x, y, z)))

# --------------------------------string slicing--------------------------------
## two ways to do it:
##     1. indexing[]
##     2. slice function

# name = "uday sharma"

# firstName = name[0:4] # [start:end(exclusive):step] (step is optional and set to 1 by default)
# print(firstName)

# lastName = name[5:12] #ending index is exclusive so we must put (desired index + 1)
# print(lastName)

# butcheredName = name[::2] #no arguments means 0:(max_index)
# print("butchered name: " + butcheredName)

# reversedName = name[::-1] # giving a negative arg as step starts pointer from right
# print("reversed name: " + reversedName)

# #problem: extracting website name
# website = input("input website name: ") # for example https://www.google.com is inputted
# slice_variable = slice(12, -4) # slicing 'https://www.' and '.com' from front and back

# # max index is also taken as zero and mentioning a negative index means refering to an index of that magnitude from the right
# print(website[slice_variable])