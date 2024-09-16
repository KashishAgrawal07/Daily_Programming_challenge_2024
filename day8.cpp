#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseWords(string s) {
    if (s.empty()) return "";

    // Reverse the entire string
    reverse(s.begin(), s.end());

    int right = 0, i = 0, left = 0;
    int n = s.length();

    while (i < n) {
        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i == n) break;

        // Move characters to the right position
        while (i < n && s[i] != ' ') {
            s[right] = s[i];
            right++;
            i++;
        }

        // Reverse the individual word
        reverse(s.begin() + left, s.begin() + right);

        // Add a space for the next word if it's not the end of the string
        if (right < s.length()) {
            s[right] = ' ';
            right++;
        }
        left = right;
    }

    // Remove the trailing space if needed
    if (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    return s;
}

int main() {
    string s = "the sky is blue";

    string ans = reverseWords(s);
    cout << "\"" << ans << "\"" << endl;   

    return 0;
}
