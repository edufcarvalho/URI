#include <iostream>
#include <string>

using namespace std;

int main (void) {
    char d;
    string s;
    int size, i, j;

    cin >> d >> s;

    while (d != '0') {
        string str = "";

        for (char v:s)
            if (v != d)
                str += v;

        while(str[0] == '0') {
            if(str.size() == 1) break;
            str.erase (0,1);
        }
        
        if (str.size() == 0) cout << 0 << "\n";
        else cout << str << "\n";

        cin >> d >> s;
    }

    return 0;
}
