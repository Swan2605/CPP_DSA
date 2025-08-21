#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    vector<int> charCount(26, 0);
    
    for (char c : magazine) {
        charCount[c - 'a']++;
    }

    for (char c : ransomNote) {
        if (charCount[c - 'a'] == 0) {
            return false; 
        }
        charCount[c - 'a']--;
    }

    return true;
}

int main() {
    string ransomNote, magazine;

    cout << "Enter ransom note: ";
    cin >> ransomNote;

    cout << "Enter magazine: ";
    cin >> magazine;

    if (canConstruct(ransomNote, magazine)) {
        cout << "Yes, the ransom note can be constructed.\n";
    } else {
        cout << "No, the ransom note cannot be constructed.\n";
    }

    return 0;
}
