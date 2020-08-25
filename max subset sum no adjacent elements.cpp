//https://www.hackerrank.com/challenges/max-array-sum/problem

//Dynamic Programming

int maxSubsetSum(vector<int> arr) {
vector<int> dp;
dp.push_back(arr[0]);
dp.push_back(max(dp[0],arr[1]));

for (int i = 2; i < arr.size(); i++)
{
    int m = max( {dp[i-2]+arr[i] , dp[i-1]  , arr[i]} );   //dp[i-1] stores maxsum till now
    dp.push_back(m);
}

return dp[dp.size()-1];
}
