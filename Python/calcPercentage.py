#Write a program in Python to calculate percentage of marks in three subjects. Raise exceptions if marks entered are greater than the maximum marks.

totalMarks = 300
maximumMarks = 100
total = 0

mark1 = int(input("Enter the marks in subject 1: "))
mark2 = int(input("Enter the marks in subject 2: "))
mark3 = int(input("Enter the marks in subject 3: "))

markList = [mark1, mark2, mark3]

for i in markList:
    if i > 100:
        raise Exception("User has entered marks greater than Maximum Marks")
    
    total = total + i

print(f"Percentage obtained by the user is {(total/totalMarks)*100}")

