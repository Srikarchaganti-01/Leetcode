class Solution {
public:
    bool productdig(int num,int t){
        int pdt = 1;
        while(num > 0){
            int k = num%10;
            pdt = pdt * k;
            num=num/10;
            cout<<pdt<<" ";
        }
        if(pdt%t == 0)return true;
        return false;
    }
    int smallestNumber(int n, int t) {
        int num = n;
        while(!productdig(num,t)){num++;cout<<num<<endl;}
        return num;
    }
};