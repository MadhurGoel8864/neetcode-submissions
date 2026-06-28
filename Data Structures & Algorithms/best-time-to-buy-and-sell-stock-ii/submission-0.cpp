class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int current = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i] == current){
                cout<<"In continue\n";
                cout<<"i: "<<i<<" prices[i]: "<<prices[i]<<" current: "<<current<< "profit: "<<profit<<endl;
                continue;
            }
            else if(prices[i] > current){
                cout<<"In greatr\n";

                profit+= (prices[i] - current);
                current = prices[i];
                cout<<"i: "<<i<<" prices[i]: "<<prices[i]<<" current: "<<current<< "profit: "<<profit<<endl;


            }
            else{
                cout<<"In lower\n";
                current = prices[i];
                cout<<"i: "<<i<<" prices[i]: "<<prices[i]<<" current: "<<current<< "profit: "<<profit<<endl;

            }
        }      
        return profit;
    }
};