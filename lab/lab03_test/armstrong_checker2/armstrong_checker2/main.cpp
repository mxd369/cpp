//
//  main.cpp
//  armstrong_checker2
//
//  Created by MXD on 2/11/17.
//  Copyright © 2017 MXD. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <locale>         // std::locale, std::isdigit
using namespace std;

int main()
{
    int origNum, num, rem, sum = 0;
    int digit;
    cout << "Enter a positive  integer: ";
    cin >> origNum;
    
    num = origNum;
    
    while(num != 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    
    if(sum == origNum)
        cout << origNum << " is an Armstrong number.";
    else
        cout << origNum << " is not an Armstrong number.";
    
    return 0;
}