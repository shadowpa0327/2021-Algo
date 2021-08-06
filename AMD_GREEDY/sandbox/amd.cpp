//#pragma GCC optimize ("Ofast","unroll-loops")
#include <bits/stdc++.h>
#define mod 1000000007
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int> >
#define PB push_back
#define eb emplace_back
#define MK make_pair
#define F first
#define S second
#define setpre(a) cout.precision(a),cout<<fixed;
#define ALL(a) a.begin(),a.end()
#define MEM(a,b) memset(a,b,sizeof a)
#define TIE ios::sync_with_stdio(0),cin.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;

#ifdef DEBUG
    ofstream outfile("output.txt");
#endif


struct dat{
    int t,mode,id;
    dat(int a,int b,int c):t(a),mode(b),id(c)
    {}
    bool operator<(const dat&l)const{
        if(t==l.t)return mode<l.mode;
        return t < l.t;
    }
};

int main(){TIE
    int n,k,event;
    cin>>n>>k;
    event = n;
    vector<dat>time;
    vpii activity_info;
    for(int i=0,s,e;i<n;i++){
        cin>>s>>e;
        activity_info.PB(MK(s,e));
        time.PB(dat(s,0,i));
        time.PB(dat(e,1,i));
    }
    sort(ALL(time));
    set<pii>s;
    for(auto it:time){
        if(it.mode){
            auto ptr = s.find(MK(activity_info[it.id].second,it.id));
            if(ptr!=s.end())s.erase(ptr);
        }   
        else{
            s.insert(MK(activity_info[it.id].second,it.id));
            if(s.size()>k){
                auto ptr = --s.end();
                event--;
                s.erase(ptr);
            }
        }
    }
    cout<<event<<endl;
    return 0;
}
