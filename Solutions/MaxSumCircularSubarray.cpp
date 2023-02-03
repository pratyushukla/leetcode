#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tempMaxSum = 0;
        int tempMinSum = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int totalSum = 0;

        for(auto x : nums) {
            totalSum += x;
            tempMaxSum = max(tempMaxSum + x, x);
            tempMinSum = min(tempMinSum + x, x);
            maxSum = max(maxSum, tempMaxSum);
            minSum = min(minSum, tempMinSum);
        }
        if(maxSum < 0) {
            return maxSum;
        }
        else {
            return max(maxSum, totalSum - minSum);
        }
    }
};

// class Solution {
//  public:
//   int maxSubarraySumCircular(vector<int>& A) {
//     int totalSum = 0;
//     int currMaxSum = 0;
//     int currMinSum = 0;
//     int maxSum = INT_MIN;
//     int minSum = INT_MAX;

//     int i = 0;
//     for (int a : A) {
//       cout << "\nIteration" << i << "\n"; i++;
//       cout << "----------------------Before----------------------\n";
//       cout << "tempMaxSum: " << currMaxSum << "\t" << "maxSum: " << maxSum << "\t" << "tempMinSum: " << currMinSum << "\t" << "minSum: " << minSum << "\n";
//       totalSum += a;
//       currMaxSum = max(currMaxSum + a, a);
//       currMinSum = min(currMinSum + a, a);
//       maxSum = max(maxSum, currMaxSum);
//       minSum = min(minSum, currMinSum);
//       cout << "----------------------After----------------------\n";
//       cout << "tempMaxSum: " << currMaxSum << "\t" << "maxSum: " << maxSum << "\t" << "tempMinSum: " << currMinSum << "\t" << "minSum: " << minSum << "\n";
//     }

//     return maxSum < 0 ? maxSum : max(maxSum, totalSum - minSum);
//   }
// };

int main() {
  vector<int> v{5, -3, -2, 6, -1, 4};
  Solution obj;
  cout << obj.maxSubarraySumCircular(v);
}