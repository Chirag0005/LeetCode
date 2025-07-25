class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count[100001]={0};
        int bars=0;

        for(int i : costs){
            count[i]++;
        }

        for(int i=1;i<=100000;i++){
            while(count[i]>0 && coins>=i){
                coins-=i;
                count[i]--;
                bars++;
            }
            if(i>coins) break;
        }
        return bars;
    }
};