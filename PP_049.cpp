
#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<string> ans;

    void dfs(string &s, int index, vector<string> &parts) {
        if (parts.size() == 3) {
            if (index >= s.size()) return;

            string last = s.substr(index);

            if (last.size() > 3) return;
            if (last.size() > 1 && last[0] == '0') return;
            if (stoi(last) > 255) return;

            parts.push_back(last);

            ans.push_back(
                parts[0] + "." + parts[1] + "." +
                parts[2] + "." + parts[3]
            );

            parts.pop_back();
            return;
        }

        // Try placing the next dot after 1, 2, or 3 digits
        for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
            string part = s.substr(index, len);

            if (len > 1 && part[0] == '0') break;
            if (stoi(part) > 255) break;

            parts.push_back(part);
            dfs(s, index + len, parts);
            parts.pop_back(); // Backtrack
        }
    }

public:
    vector<string> generateIP(string s) {
        ans.clear();
        vector<string> parts;

        if (s.size() < 4 || s.size() > 12)
            return ans;

        dfs(s, 0, parts);
        return ans;
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter digit string: ";
    cin >> s;

    vector<string> result = sol.generateIP(s);

    if (result.empty()) {
        cout << "No valid IP addresses found.\n";
    } else {
        for (const string &ip : result)
            cout << ip << '\n';
    }

    return 0;
}
