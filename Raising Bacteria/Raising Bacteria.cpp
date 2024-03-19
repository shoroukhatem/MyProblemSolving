
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int b;
    cin >> b;
    bitset<64> st(b);
    cout<<st.count() << endl;

}

