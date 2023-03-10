//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION_H
#define C___SOLUTION_H
#include <vector>
using namespace std;


class Solution{
public:
    /**
     *
     * @param prices int整型vector
     * @return int整型
     */
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_val = prices[n - 1];
        int maxProfit = 0;
        for (int i = n - 2; i >= 0; --i) {
            if (prices[i] > max_val){
                max_val = prices[i];
            } else{
                maxProfit = max(maxProfit, max_val - prices[i]);
            }
        }
        return maxProfit;
    }
};


#endif //C___SOLUTION_H
