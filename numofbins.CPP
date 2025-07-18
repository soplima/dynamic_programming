#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    int countOnesInBinary(int n) {
        string bin;
        while (n != 0) {
            bin += (n % 2 == 0 ? '0' : '1');
            n /= 2;
        }
        return count(bin.begin(), bin.end(), '1');
    }

public:
    vector<int> countBits(int n) {
        vector<int> result;
        for (int i = 0; i <= n; i++) {
            result.push_back(countOnesInBinary(i));
        }
        return result;
    }
};
