#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    // Note: 
    // when a operation is told to be performed over the digits of a number 
    // use 1. strings of digit 2. use loop to discrete digits

    string num;
    cin>>num;

    int n = num.size();
    string ans="";
    for(int i=0;i<n;i++){
        char ch = num[i];
        if(i==0 && ch=='9') {   // if 1st digit is 9, leave it 
            num[i]=ch;
            continue;
        }
        // cout<<('9'-ch)+'0' <<" "<<ch<<endl;
        if(('9'-ch+'0') < ch){
            num[i] = (char)('9'-ch)+'0';  // balancing ascii, invert with 9-digit
        }else{
            num[i] = (char)ch;
        }
    }
    cout<<num<<endl;

}
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
