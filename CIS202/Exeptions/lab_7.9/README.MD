# Prompt
Given a program that searches for a student’s ID or name in a text file, complete the FindID() and FindName() functions. Then, insert a try/catch statement in main() to catch any exceptions thrown by FindID() or FindName(), and output the exception message. Each line in the text file contains a name and ID separated by a space.

 Function FindID() has two parameters: a student's name (string) and the text file's contents (ifstream). The function FindID() returns the ID associated with the student's name if the name is in the file, otherwise the function throws a runtime_error with the message "Student ID not found for studentName", where studentName is the name of the student.

Function FindName() has two parameters: a student's ID (string) and the text file's contents (ifstream). The function FindName() returns the name associated with the student's ID if the ID is in the file, otherwise the function throws a runtime_error with the message "Student name not found for studentID", where studentID is the ID of the student.

The main program takes three inputs from a user: the name of a text file (string), the search option for finding the ID or name of a student (int), and the ID or name of a student (string). If the search option is 0, FindID() is invoked with the student's name as an argument. If the search option is 1, FindName() is invoked with the student's ID as an argument. The main program outputs the search result or the caught exception message.

# Inputs
Ex: If the input of the program is:

roster.txt 0 Reagan
and the contents of roster.txt are:

Reagan rebradshaw835
Ryley rbarber894
Peyton pstott885
Tyrese tmayo945
Caius ccharlton329
the output of the program is:

rebradshaw835
Ex: If the input of the program is:

roster.txt 0 Mcauley
the program outputs an exception message:

Student ID not found for Mcauley
Ex: If the input of the program is:

roster.txt 1 rebradshaw835
the output of the program is:

Reagan
Ex: If the input of the program is:

roster.txt 1 mpreston272
the program outputs an exception message:

Student name not found for mpreston272