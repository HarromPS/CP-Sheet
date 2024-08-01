#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

/*
A. Chewbaсca and Number
time limit per test
1 second
memory limit per test
256 megabytes

Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
Input

The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.
Output

Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
Examples
Input
Copy

27

Output
Copy

22

Input
Copy

4545

Output
Copy

4444
*/
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
