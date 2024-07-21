#include <vector>
using namespace std;

class Solution
{
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int mostMoney = 0;
        for(auto customer : accounts){
            
            int currentMoney = 0;
            for (auto money : customer)
            {
            currentMoney += money;
            }
            if (currentMoney > mostMoney) mostMoney = currentMoney;
            
        }
        return mostMoney;

    }
};