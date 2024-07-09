class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& arr) {
        double total = 0;
        double ans = 0;
        for(auto it:arr)
        {
            int arrival = it[0];
            int time = it[1];
            if(arrival > total)
            {
                ans = ans + time;
                total = arrival + time;
            }
            else
            {
                int finishTime = total + time;
                ans = ans + finishTime - arrival;
                total = finishTime;
            }
        }
        return ans/(arr.size());
    }
};