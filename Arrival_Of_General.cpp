#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int maxEle=INT_MIN;
    int minEle=INT_MAX;
    int minIndex=0;
    int maxIndex=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(maxEle < x){
            maxEle = x;
            maxIndex = i;
        }
        if(minEle >= x){
            minEle = x;
            minIndex = i;
        }
    }
    int ans = maxIndex + n - minIndex - 1;
    if(maxIndex < minIndex){
        cout<<ans<<endl;
    }else{
        cout<<ans-1<<endl;
    }        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ll test;
    // cin>>test;
    // while(test--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
