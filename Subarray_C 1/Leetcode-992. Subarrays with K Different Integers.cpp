
#include <vector>
#include <map>

using namespace std;

int main() {
    cout << "hello";
    return 0;
}
using namespace std;

class Solution {
public:
    // Function to count the number of subarrays with at most K distinct elements
    int subarrCnt(vector<int> nums, int k) {
        int res = 0;
        // Map to store the count of each distinct element in the current window
        map<int, int> mp;

        // Two pointers approach to iterate through the array
        for (int left = 0, a = 0; a < nums.size(); a++) {
            // Add the current element to the map and update its count
            mp[nums[a]]++;
            // If the number of distinct elements exceeds K
            if (mp.size() > k) {
                // Adjust the window by moving the left pointer until the count of distinct elements becomes K or less
                while (mp.size() > k) {
                    // Decrease the count of the element pointed by the left pointer
                    mp[nums[left]]--;
                    // If the count becomes zero, remove the element from the map
                    if (mp[nums[left]] == 0)
                        mp.erase(nums[left]);
                    // Move the left pointer to the right
                    left++;
                }
            }
            // Add the count of subarrays ending at the current index to the result
            res += a - left + 1;
        }
        // Return the total count of subarrays with at most K distinct elements
        return res;
    }

    // Function to count the number of subarrays with exactly K distinct elements
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // Count of subarrays with at most K distinct elements minus count of subarrays with at most K-1 distinct elements
        return subarrCnt(nums, k) - subarrCnt(nums, k - 1);
    }
};

// explanation
/*subarrCnt function:

Counts the number of subarrays with at most K distinct elements within a given array.
Uses a sliding window approach with two pointers (left and a) to traverse the array.
Maintains a map (mp) to store the count of each distinct element within the current window.
If the count of distinct elements exceeds K, it adjusts the window by moving the left pointer until the count is reduced to K or less.
Computes the count of subarrays with at most K distinct elements by adding the length of each valid subarray formed by the current window to the result.
subarraysWithKDistinct function:

Utilizes subarrCnt to count the number of subarrays with exactly K distinct elements.
Achieves this by subtracting the count of subarrays with at most K-1 distinct elements from the count of subarrays with at most K distinct elements.
This subtraction leaves us with only those subarrays that have exactly K distinct elements.*/