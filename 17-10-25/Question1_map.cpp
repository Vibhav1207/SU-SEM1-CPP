#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    // Given a frequency map and an element x, return its frequency (0 if absent).
    int frequency(const map<int,int>& freqMap, int x) {
        auto it = freqMap.find(x);
        return (it == freqMap.end()) ? 0 : it->second;
    }

    // Build frequency map from input stream (reads m integers from cin)
    static map<int,int> buildFreqMapFromInput(int m) {
        map<int,int> mp;
        for (int i = 0; i < m; ++i) {
            int val;
            cin >> val;
            mp[val]++;
        }
        return mp;
    }
};

int main() {
    int m, x;
    cout << "Enter size of array: ";
    if (!(cin >> m) || m < 0) return 0;

    cout << "Enter array elements: ";
    map<int,int> mp = Solution::buildFreqMapFromInput(m);

    cout << "Enter element to find frequency: ";
    cin >> x;

    Solution sol;
    cout << "Frequency of " << x << " is " << sol.frequency(mp, x) << '\n';
    return 0;
}
