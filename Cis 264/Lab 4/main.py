#In this lab you will use Python to find the intersection of sets. You can hard code the sets into the program, you do not have to take user input for them.

#After you have the sets use a combination of loops and test conditions to find the set of intersecting elements between your two sets. Do not use prepackaged functions for this.

#Output the and label the original sets and the intersection of the sets.

###

Set1 = {'a', 'b', 'c'}  # Set A
Set2 = {'b', 'c', 'd'}  # Set B

print(f"Set A: {sorted(Set1)}")  # Print Set A
print(f"Set B: {sorted(Set2)}")  # Print Set B

container = []

for x in Set1:
    for y in Set2:
        if(x == y):{
            container.append(x)
        }

print(f"\nIntersection of A and B contains: {sorted(container)}")
