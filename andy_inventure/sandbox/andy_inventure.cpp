#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSum(vector<int>& nums,int sum) {

            
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++) {
            int L = i+1,R = n-1,target = sum-nums[i];
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            while(L<R){
                int cur = nums[L] + nums[R];
                if(cur == target){
                    ans++;
                    L++;
                    while(L<R&&nums[L]==nums[L-1])
                        L++;
                    R--;
                    while(R>=L&&nums[R]==nums[R+1])
                        R--;
                }
                else if(cur<target){
                    L++;
                }
                else{
                    R--;
                }
            }
        }
        return ans;
    }
};

int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>input;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        input.push_back(tmp);
    }
    Solution s;
    int ans = s.threeSum(input,tar);
    if(ans)
        cout<<ans<<endl;
    else
        cout<<"FeiDoDo_Left_Wei_Men"<<endl;
    return 0;
}

/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<long long> a(n);
    for(long long &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i = 0; i + 1 < n; i++) {
        if(i && a[i] == a[i - 1])
            continue;
        int l = i + 1, r = n - 1;
        while(l < r) {
            long long sum = a[i] + a[l] + a[r];
            if(sum == t) {
                ans++;
                while(++l < r && a[l] == a[l - 1]);
                while(--r > l && a[r] == a[r + 1]);
            } else if(sum < t) {
                l++;
            } else {
                r--;
            }
        }
    }
    if(ans)
        cout << ans << '\n';
    else
        cout << "FeiDooDoo_Zuo_Wei_Men\n";
}


*/