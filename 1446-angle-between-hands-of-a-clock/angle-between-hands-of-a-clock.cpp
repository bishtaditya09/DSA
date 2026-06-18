class Solution {
public:
    double angleClock(int hr, int mn) {
       hr=hr%12;
       double mi=abs(30*hr-5.5*mn);
       return min(mi,360.0-mi);
    }
};