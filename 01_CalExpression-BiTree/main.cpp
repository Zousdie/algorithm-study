#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int CalExpression(string str, int *start, bool isExternal);

int main()
{
    cout << CalExpression("", 0, true) << endl;

    system("pause");
    return 0;
}

int CalExpression(string str, int *start, bool isExternal)
{
    return 1;
}
