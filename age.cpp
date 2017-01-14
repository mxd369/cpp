/*
Question   :
  Write your code to assign value
  -1 to 5 to the variable 'ageResult',
  depending on the value of variable 'age'.
int age : Age of a person
int ageResult: Store the resultant value in this variable
*/
void detectAgeResult(int age, int &ageResult) {
    //Write your solution code below this line
    if (age < 0) { ageResult = -1; }
    else if (age >= 0 && age <= 5) { ageResult = 0; }
    else if (age >= 6 && age <= 12) { ageResult = 1; }
    else if (age >= 13 && age <= 19) { ageResult = 2; }
    else if (age >= 20 && age <= 50) { ageResult = 3; }
    else if (age >= 51 && age <= 60) { ageResult = 4; }
    else if (age >= 61 && age <= 101) { ageResult = 5; }
    else if (age > 101) { ageResult = -1; }
    //return ageResult;
}


/*

Non Graded Test Cases:


Non Graded Test Case #1


Input Age:-4
Checking Function 'ageResult'

Your Output:-1
Expected Output:-1
Output matches


Non graded test case #1 passed


Non Graded Test Case #2


Input Age:34
Checking Function 'ageResult'

Your Output:3
Expected Output:3
Output matches


Non graded test case #2 passed


Non Graded Test Case #3


Input Age:16
Checking Function 'ageResult'

Your Output:2
Expected Output:2
Output matches


Non graded test case #3 passed


All Non Graded Test Cases Passed!

Checking for graded test cases...


Graded Test Case #1:

Input age:555
Checking Function 'ageResult'

Output matches

Graded Test Case #1 passed


Graded Test Case #2:

Input age:13
Checking Function 'ageResult'

Output matches

Graded Test Case #2 passed


Graded Test Case #3:

Input age:17
Checking Function 'ageResult'

Output matches

Graded Test Case #3 passed


Graded Test Case #4:

Input age:11
Checking Function 'ageResult'

Output matches

Graded Test Case #4 passed


Graded Test Case #5:

Input age:8
Checking Function 'ageResult'

Output matches

Graded Test Case #5 passed


Graded Test Case #6:

Input age:2
Checking Function 'ageResult'

Output matches

Graded Test Case #6 passed


Graded Test Case #7:

Input age:2
Checking Function 'ageResult'

Output matches

Graded Test Case #7 passed

Result

Test Summary

Your function "ageResult" passes graded test case #1

Your function "ageResult" passes graded test case #2

Your function "ageResult" passes graded test case #3

Your function "ageResult" passes graded test case #4

Your function "ageResult" passes graded test case #5

Your function "ageResult" passes graded test case #6

Your function "ageResult" passes graded test case #7

Expected Grade :   10

*/