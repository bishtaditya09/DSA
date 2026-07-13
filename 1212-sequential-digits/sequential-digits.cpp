class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        queue<int>que;
        for(int i=1;i<=8;i++)
        que.push(i);

       
         while(!que.empty())
         {
          int temp=que.front();
          que.pop();
             
           if(temp>=low && temp<=high)
            ans.push_back(temp);

             int last=temp%10;
             if(last+1<=9)
             que.push(temp*10+(last+1));
         }
        return ans;
    }
};