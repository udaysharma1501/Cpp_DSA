# --------variables--------
firstName = "uday"
lastName = "sharma"
name = firstName + " " + lastName

print("hello " + name)

# ------------updation and typecasting
print("\n")
age = 19
age = age + 1
age += 1

print("your age is: " + str(age))  # expected 21
print("the type of age is: " + str(type(age)))

# strings arent used for math operations hence we use typecasting

# ------------booleans
print("\n")
human = True
print("Am I a human: " + str(human))

# ------------multiple assignment
print("\n")
name, age, attractive = "uday", 19, True
age1 = age2 = 19
print(name, age, attractive, age1, age2)

# ------------string functions
print("\n")
name = "uday Sharma"
print(len(name))
print(name.find("r"))
print(name.find("rm"))  # also returns the beginning point of a substring
print(name.capitalize())  # capitalises first word's first letter while ALSO decapitalising the other words
print(name.upper())
print(name.lower())
print(name.isdigit())  # retuns true iff all chars are digits
print(name.isalpha())
print(name.count("a"))  # returns number of chars in variable that match the argument
print(name.replace("a", "x"))
print(name * 3)

# ------------typecasting

# ------------typecasting
