class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fi=0,te=0;
        int n=bills.size();
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5) fi++;
            else if(bills[i]==10)
            {
                if(!fi) return false;
                else{
                te++;
                fi--;
            }
            }
            else{
            if(fi && te){ te--;
                fi--;
             }
                else if(fi>=3)
                {
                    fi-=3;
                }
                else
                return false;
            }
        }
        return true;
    }
};