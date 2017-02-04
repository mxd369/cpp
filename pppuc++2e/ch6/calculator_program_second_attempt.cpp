#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter expression(we can handle +,-,* and /): ";
	int lval = 0;
	int rval;
	char op;
	//int res;
	cin>>lval; // read leftmost operand
	
	if(!cin)cout<<"no first operand";
	while(cin>>op){  // read operator and right-hand operand repeatedly
		cin>>rval;
		if(!cin) cout << "no second operand";
		switch(op) {
		case '+':
		    lval += rval; //      add: lval = lval + rval
		    break;
		case '-':
		    lval -= rval; // subtract: lval = lval - rval
		    break;
		case '*':
		    lval *= rval; // multiply: lval = lval * rval
			break;
		case '/':
		    lval /= rval; //   divide: lval = lval / rval
			break;
		default: // no other operator: print result
		    cout << "Result: " << lval << '\n';
		    return 0;
		}
	}
	
}