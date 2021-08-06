#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

long long mypow(long long a, long long b) {
    long long re = 1;
    while(b) {
        if(b & 1)
            re = re * a % MOD;
        b >>= 1, a = a * a % MOD;
    }
    return re;
}

int main(){
    long long a,b;
    cin>>a>>b;
    long long k = b/(a-1);
    int number_of_query;
    cin>>number_of_query;
    while(number_of_query--){
        long long ith_day;
        cin>>ith_day;
        long long ans = mypow(a,ith_day-1);
        ans = (ans * (1+k)) % MOD;
        ans = (ans - k + MOD)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}