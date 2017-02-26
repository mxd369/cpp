/*
 * driver.cpp
 *
 *  Created on: Feb 26, 2017
 *      Author: michaeldang
 */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
#include "Calculator.h"
void processScript(Calculator& Calc, istream& Script,
ostream& Log);
int main() {
Calculator myCalculator(0);
ifstream Script("CalculatorScript.txt");
ofstream Tape("CalculatorTape.txt");
processScript(myCalculator, Script, Tape);
Script.close();
Tape.close();
return 0;
}
void processScript(Calculator& Calc, istream& Script,
ostream& Log) {
const string EXITCMD = "exit";
string Command;
int Operand;
unsigned int cmdNum = 0;
getline( Script, Command, '\t' );
while ( Script && Command != EXITCMD ) {
Script >> Operand >> ws;
Log << setfill('-') << setw(50) << '-'
<< setfill(' ') << endl;
Log << setw(5) << cmdNum << ": "
<< setw(10) << left << Command << right;
if ( Command != "clear" ) {
Log << setw(16) << Operand;
}
Log << endl;
if ( Command == "add" ) {
Calc.Add( Operand );
}
else if ( Command == "subtract" ) {
Calc.Subtract( Operand );
}
else if ( Command == "multiply" ) {
Calc.Multiply( Operand );
}
else if ( Command == "divide by" ) {
Calc.DivideBy( Operand );
}
else if ( Command == "clear" ) {
Calc.Clear();
}
else {
Log << "The command " << Command
<< " is not recognized." << endl;
}
Log << " calculator display: " << setw(10)
<< Calc.getValue() << endl;
getline(Script, Command, '\t');
}
Log << setfill('-') << setw(50) << '-' << setfill(' ')
<< endl;
}



