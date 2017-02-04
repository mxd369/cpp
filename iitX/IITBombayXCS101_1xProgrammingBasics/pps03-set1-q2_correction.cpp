#include <iostream>
using namespace std;
int main()
{
    int FACT = 1;
    for (unsigned int i = 6; i > 1; --i)
    {
        FACT *= i;
    }
    cout << FACT << endl;
    return 0;
}
