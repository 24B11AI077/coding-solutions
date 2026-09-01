# Given dictionary
student_grades = {"Alice": 85, "Bob": 72, "Charlie": 90, "David": 65, "Eva": 88, "John": 45}

# Complete the code 
name = input()
if name in student_grades:
    print(student_grades[name])
else :
    print("Not Found")