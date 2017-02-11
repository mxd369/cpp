#include <iostream>
#include <sstream>

using namespace std;

int main() {
        stringstream ss("abc gg rrr ff");
        string s1, s2;
        ss >> s1;
        getline(ss, s2); //get rest of the string!
        cout << s1 << endl;
        cout << s2 << endl;
        return 0;
}
