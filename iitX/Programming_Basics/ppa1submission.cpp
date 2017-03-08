//practice programming assignment 1

/*
Practice Programming Assignment (PPA 01)

A CS101 student wants to assign the value to the variable 'ageResult' based on the age of a person.
The value of age is itself stored in a variable 'age'.
The table given below mentions the conditions using which the number needs to be assigned to 'ageResult'.

Condition for age	Assign value to variable ageResult
Less than 0	        -1
0 to 5 	            0
6 to 12	            1
13 to 19            2
20 to 50	        3
51 to 60	        4
61 to 101 	        5
Greater than 101	-1
*/
/*
Question      : Write your code to assign value -1 to 5 to the variable 'ageResult', depending on the value of variable 'age'.
int age       : Age of a person
int ageResult : Store the resultant value in this variable
*/
Toggle navigation

Project
Edit
View
Actions
 Compile    Run    Submit
PPA1
Root
student.cpp
student.cpp  


5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
void detectAgeResult(int age, int &ageResult) {
    //Write your solution code below this line
if(ageResult < 0) {
        ageResult = -1;
    }
    else if((ageResult >= 0) && (ageResult <= 5)){
        ageResult = 0;
    }
    else if((ageResult >= 6)&&(ageResult <= 12)){
        ageResult = 1;
    }
    else if((ageResult >= 13)&&(ageResult <= 19)){
        ageResult = 2;
    }
    else if((ageResult >= 20)&&(ageResult <= 50)){
        ageResult = 3;
    }
    else if((ageResult >= 51)&&(ageResult <= 60)){
        ageResult = 4;
    }
    else if((ageResult >= 61)&&(ageResult <= 101)){
        ageResult = 5;
    }
    else if(ageResult > 101){
        ageResult = -1;
    }
    else{
        //cout << "Error" << '\n';
    }
    //return ageResult;
}
Non Graded Test Cases:


Non Graded Test Case #1


Input Age:-4
Checking Function 'ageResult'

Your Output:0
Expected Output:-1
Output does not match


Non graded test case #1 failed


Non Graded Test Case #2


Input Age:34
Checking Function 'ageResult'

Your Output:0
Expected Output:3
Output does not match


Non graded test case #2 failed


Non Graded Test Case #3


Input Age:16
Checking Function 'ageResult'

Your Output:-1
Expected Output:2
Output does not match


Non graded test case #3 failed


 
Few/All Non Graded Test Cases Failed!

Checking for graded test cases...


Graded Test Case #1:

Input age:514
Checking Function 'ageResult'

Output matches

Graded Test Case #1 passed


Graded Test Case #2:

Input age:73
Checking Function 'ageResult'

Your Output:-1
Expected Output:5
Output does not match


Graded Test Case #2 failed


Graded Test Case #3:

Input age:15
Checking Function 'ageResult'

Your Output:-1
Expected Output:2
Output does not match


Graded Test Case #3 failed


Graded Test Case #4:

Input age:2
Checking Function 'ageResult'

Your Output:-1
Expected Output:0
Output does not match


Graded Test Case #4 failed


Graded Test Case #5:

Input age:0
Checking Function 'ageResult'

Your Output:-1
Expected Output:0
Output does not match


Graded Test Case #5 failed


Graded Test Case #6:

Input age:2
Checking Function 'ageResult'

Your Output:-1
Expected Output:0
Output does not match


Graded Test Case #6 failed


Graded Test Case #7:

Input age:2
Checking Function 'ageResult'

Output matches

Graded Test Case #7 passed

Result

Test Summary

Your function "ageResult" passes graded test case #1

Your function "ageResult" fails graded test case #2

Your function "ageResult" fails graded test case #3

Your function "ageResult" fails graded test case #4

Your function "ageResult" fails graded test case #5

Your function "ageResult" fails graded test case #6

Your function "ageResult" passes graded test case #7

Expected Grade :   2.85714








