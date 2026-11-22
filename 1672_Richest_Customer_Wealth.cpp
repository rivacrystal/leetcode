/* You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth. */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealthiest = 0;

        for (std::size_t i = 0; i < accounts.size(); ++i) {
            int total = 0;

            for (std::size_t j = 0; j < accounts[i].size(); ++j) {
                total += accounts[i][j];
            }

            if (total > wealthiest) {
                wealthiest = total;
            }
        }

        return wealthiest;
    }
};
