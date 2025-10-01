class Solution {
public:
    int numWaterBottles(int num, int numEx) {
     int tot=num;
     int emp=num; //kitni khali ho skti h
     while(emp>=numEx)
     {
        int nb=emp/numEx;  //itni aur khali ho jaegi
        tot+=nb;      
        emp=emp%numEx+nb;     //isme modulo isiliye kiya taki remaining aa jaye
     }
     return tot;
    }
};