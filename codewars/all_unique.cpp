#include <iostream>
#include <string>
using namespace std;

bool hasUniqueChars(std::string s) {
    int dedup = 0;
    for(char& c : s) {
        dedup = 0;
        for(int i = 0; i < s.size(); i++) {
            if (std::tolower((int)c) == std::tolower((int)s[i])) {
                dedup++;
            }
        }
        // cout << c << " " << dedup << endl;
        if(dedup > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << hasUniqueChars("  nAa");
    return 0;
}
