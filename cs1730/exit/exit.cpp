
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

  int estatus;

  cout << "What do you want the exit status to be? ";
  cin >> estatus;

  cout << "Setting exit status to "
       << estatus
       << ". Use \"$ echo $?\" to verify, after termination."
       << endl;

  return estatus;

} // main

