'''
collection of data which is 
                        - unordered
                        - unindexed
                        - has no duplicate values
'''
utensils = {"fork", "spoon", "knife", "sameitem"}

# may not print in the same order
# print(utensils)
# for x in utensils:
#     print(x)

# *** faster to check data as compared to list or tuple

# utensils1 = {"fork", "spoon", "knife", "knife"} # doesnt print repeated elements
# print(utensils1)
# for x in utensils1:
#     print(x)

# utensils.add("napkin") # methods
# utensils.remove("fork")
# utensils.clear()
    
# ---------------------------- operations with another set ----------------------------
dishes = {"bowl", "cup", "plate", "sameitem"} 

# ---------------------------- adding ---------------------------- 
# utensils.update(dishes)
# print(utensils)
# dishes.update(utensils) # works the same way

# dinner_table = utensils.union(dishes) 
# print(dinner_table)

# ---------------------------- difference ---------------------------- 
print(utensils.difference(dishes)) # what utesils has but dishes doesnt