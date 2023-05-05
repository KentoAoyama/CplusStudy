#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> maps;
    for (string s; n-- && cin >> s; maps[s] = 0);

    cin >> n;
    for (string s; n-- && cin >> s;) {
        int num;
        cin >> num;
        maps[s] += num;
    }

    vector<pair<string, int>> pairs;
    for (auto m : maps) {
        pairs.push_back(pair<string, int>(m.first, m.second));
    }
    sort(pairs.begin(), pairs.end());

    for (auto p : pairs) {
        cout << p.second << endl;
    }
}