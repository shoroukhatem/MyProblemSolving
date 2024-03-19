
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q > 0) {
        int x;
        cin >> x;
        bitset<32>st(x);
        for (int i = 0;i < 32;i++) {
            st.flip(i);
        }
        long long  num = st.to_ullong();
        cout << num << endl;
        q--;
    }
   
}

