# --------------------------------if--------------------------------
# # as order of if and elif statements matter, it's prefferable to make the most general cases the highest
# age = float(input("enter age: "))
# if age>0:
#     if age>=18:
#         print("you're an adult")
#     else:
#         print("you're not an adult")
# else:
#     print("you're not born yet")
# #------------------
# if age==25:
#         print("your age is 25")
# elif age==26:
#     print("your age is 26")
# #------------------
# if age==27:
#     print("your age is 27")
# elif age==28:
#     print("your age is 28")
# else:
#     print("your age isnt 27 or 28")

# --------------------------------logical operators--------------------------------
# # and, or, not
# temp = int(input("input temperature: "))

# if temp >= 0 and temp<=30: # both must be true for complete to be true
#     print("good temp")
# elif temp >= 30 or temp < 0: # either must be true for complete to be true
#     print("bad temp")

# print(not(1)) # flips true to false ad vica versa

# --------------------------------while loop--------------------------------

# name = ""
# while len(name) == 0:
#     name = input("enter name: ")
# print("hello " + name)

# --------------------------------for loop--------------------------------
# for i in range(10):
#     print((i+1)/2)

# for i in range(10, 21): # ending index is exclusive
#   print(i/2)

# for i in range(10, 21, 2): # start, end step
#     print(i)


# for i in range(20, 10, -2): # start, end step
#     print(i)

# problem: create a countdown time that counts from n to 0 and prints happy bday at the end
# import time
# for seconds in range (10, 0, -1):
#     print(str(seconds) + " ")
#     time.sleep(1)
# print("happy bday")

# problem: print the following patterns using loops
# ***
# **
# *
# star = "*"
# for i in range(3, 0, -1):
#     print(star*i)

# *
# **
# ***
# star = "*"
# n = int(input("enter number of rows: "))
# for i in range(1, n+1):
#     print(star*i)

# ***
#  **
#   *
# star = "*"
# for i in range(3, 0, -1):
#     print((" "*(3-i))+star*i)

#   *
#  **
# ***
# star = "*"
# for i in range(1, 4):
#     print(" "*(3-i) + star*i)
#------------------
# # print a grid of rows x coloumns of stars
# star = "*"
# rows = int(input("input rows: "))
# coloumns = int(input("input coloumns: "))
# counter = 0
# # why doenst this work?
# while rows:
#     counter = 0
#     while coloumns:
#         print(star, end="")
#         coloumns = coloumns - 1
#         counter = counter + 1
#     print()
#     coloumns = counter
#     rows = rows - 1
#------------------
# for i in range(rows):
#     for j in range(coloumns):
#         print("*", end="")
#     print()

# --------------------------------loop control statements--------------------------------
# break     - terminates loop entirely
# continue  - skips to next iteration
# pass      - does nothing, acts as placeholder

# while True:
#     name = input("enter name: ")
#     if name != "":
#         break

# num = "9319-5549-50"
# for i in range(len(num)):
#     if num[i] == "-":
#         continue
#     print(num[i], end="")

# for i in range(1, 21):
#     if i == 13:
#         pass
#     print(i, end="")