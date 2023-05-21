### Intructions
# Cartesian Product generator

# Write a python program that will generate the Cartesian Product of two sets that are given to it. The program must be able to create the Cartesian Product regardless of the size of the 2 sets it is given. 
# These sets can be hard coded into the program, they do not have to be taken from user input. 

# The program must output the original sets, each on a separate line. 

# The program will then output the cartesian product resulting set. This should be done manually through loops, don't use any prepackaged functions to complete the cartesian product.
# After the output of the sets it must output the total number of set elements it generated for the Cartesian Product. 

# After the number of sets it should output a paragraph of text explaining some good use case scenarios for Cartesian Products. XXXXX

# Submit the python file to this assignment. 

###

Set1 = {'1','2','3'} # Set A
Set2 = {'x','y','z'} # Set B

print(f"Set A: {Set1}") # Print Set A
print(f"Set B: {Set2}") # Print Set B

container = set()

for x in Set1:
    for y in Set2:
        new_set = (x,y)
        container.add(new_set)

print(f"\nCartesian Products: {sorted(container)}")

print(f"Total Cartesian Product Elements: {len(container)}")
print("\nHere are some useful applications of Cartesian Products:")
print("* Checker board.")
print("* Catagorizing animals.")
print("* School seperating students by grade level.")
