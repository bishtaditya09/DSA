class Solution {
public:
    int candy(vector<int>& ra) {
        int n=ra.size();
        int i=1;
        int sum=1;
        int peak,down;
        while(i<n)
        {
            if(ra[i]==ra[i-1])
            {
                sum+=1;
                i++;
                continue;
            }
            peak=1;
            while(i<n && ra[i]>ra[i-1])
            {
                peak+=1;
                sum+=peak;
                i++;
            }
            down=1;
            while(i<n && ra[i]<ra[i-1])
            {
                sum+=down;
                down+=1;
                i++;
            }
            if(peak<=down) sum+=down-peak;
        }
        return sum;
    }
};