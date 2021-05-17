#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    regex e("([0-9]+)");
    smatch m;
    string s;
    vector<string> v;
    getline(cin, s);
    while (regex_search(s, m, e)) {
        v.push_back(m[0]);
        s = m.suffix().str();
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = v.size() - 1; j > i; j--) {
            if ((v[j].length() < v[j - 1].length()) || (v[j].length() == v[j - 1].length()) && (v[j] < v[j - 1])) {
                swap(v[j], v[j - 1]);
            }
        }
    }
    cout << v.back() << "\n";
    return 0;
}