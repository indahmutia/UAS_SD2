#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}

int main() {
    string s;
    getline(cin, s);

    string cleaned = "";
    for (char c : s) {
        if (isAlphaNum(c)) {
            cleaned += tolower(c);
        }
    }
    int l = 0, r = cleaned.size() - 1;
    bool pal = true;
    while (l < r) {
        if (cleaned[l] != cleaned[r]) {
            pal = false;
            break;
        }
        l++;
        r--;
    }

    cout << (pal ? "True" : "False"); 
    
}
