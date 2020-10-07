#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    int s;
    char cript[1001];
    scanf("%d", &s);
    
    cin.getline(cript, 0);
    while (s--) {
        cin.getline(cript, 1001);
        
        for (char &v:cript)
            if (v >= 65 && v <= 90 || v >= 97 && v <= 122)
                v += 3;

        string rev = cript;
        reverse(rev.begin(), rev.end());
        
        int i, size = rev.size();
        for (i = size/2; i < size; i++)
            rev[i] -= 1;

        cout << rev << "\n"; 
    }
    return 0;
}
