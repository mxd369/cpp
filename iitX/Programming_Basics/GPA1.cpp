/*
Graded Programming Assignment  (GPA 01 - 10 Marks)

FlipDigital:
FlipDigital is a company that manufactures harddisks of various RPM (Revolutions Per Minute) to cater to the needs of all individuals.
Usually, the life span of their harddisks is more than 10 years, i.e.
It should work for atleast 10 years.
Unfortunately, a serious bug was detected, due to which the RPM increases or decreases every year in the following manner:
(a) multiply the number 323 to sum of the squares of the digits of the RPM
(b) shift the digits of the RPM to the right by 1 position in a cyclic way, and finally
(c) extract the last two digits of the new number obtained and add to the result obtained in 'a'. The final result (c) is the new RPM. 

This issue is that if the RPM increases by a certain limit,
then the hard disk crashes,
which is also dangerous to the person who is using it.
The maximum limit of the RPM of the hard disk is 8 times of the RPM,
i.e. if RPM of harddisk is 1000, then the maximum RPM can be 1000 * 8 = 8000.
This issue needs to be resolved before they release the harddisks to the general public.
We have been given a contract to find out (based on the RPM) which harddisks will last for more than 10 years,
and which will not. 

Assume that the RPM is between 3524 and 8524 only, both inclusive.
*/

/*
Task:  You are required to write code that does the following:-
1) Find out the sum of the squares of the digits of the RPM

2) Multiply the number obtained in (1) by 323

3) Do a cyclic right shift of digits of the RPM i.e. if Number is 1234, after cyclic right shift, the number will be 4123. Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new RPM value.

4) Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

Example 1: Assume an RPM of 5524. So, the maximum limit of RPM is 5524 * 8 = 44192
*/

/*
Requirement:
You are required to do the following:

1) Find out the sum of the squares of the digits of the RPM

2) Multiply the number obtained in (1) by 323

3) Do a cyclic right shift of digits of the RPM and take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new RPM value.

4) Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

5) Finally assign the modified value i.e. the final of RPM to the variable 'finalRPM'
*/

#include <iostream>
using namespace std;

int main()
{
	
	return 0;
}