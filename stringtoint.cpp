
#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str)
{

    if (str.length() == 1)
        return (str[0] - '0');

    double y = stringToInt(str.substr(1));

    double x = str[0] - '0';
    x = x * pow(10, str.length() - 1) + y;
    return int(x);
}


int main()
{
    string str = "1235";
    cout << (stringToInt(str)) << endl;
}
