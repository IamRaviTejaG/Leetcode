// Difficulty: Easy
//
// https://leetcode.com/problems/how-many-apples-can-you-put-into-the-basket/
//
// 5072. How Many Apples Can You Put into the Basket
//
// You have some apples, where arr[i] is the weight of the i-th apple.  You also have a basket that can carry up to 5000 units of weight.
//
// Return the maximum number of apples you can put in the basket.
// 
// Example 1:
//
// Input: arr = [100,200,150,1000]
// Output: 4
// Explanation: All 4 apples can be carried by the basket since their sum of weights is 1450.
//
// Example 2:
//
// Input: arr = [900,950,800,1000,700,800]
// Output: 5
// Explanation: The sum of weights of the 6 apples exceeds 5000 so we choose any 5 of them.


class Solution {
public:   
    int maxNumberOfApples(vector<int>& arr) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        std::sort(arr.begin(), arr.end());
        int count = 0, sum = 0;
        for (int i=0; i<arr.size(); i++)
        {
            sum += arr[i];
            ++count;
            if (sum >= 5000)
            {
                --count;
                break;
            }
        }
        return count;
    }
};
