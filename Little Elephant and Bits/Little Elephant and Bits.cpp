
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int c = num.find('0');
    if (c == -1) {
        cout << num.substr(1) << endl;
    }
    else {
        num.erase(c, 1);
        cout << num;
    }
    
}

