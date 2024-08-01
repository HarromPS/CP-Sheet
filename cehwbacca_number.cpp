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
    int n=5;
    int mat[n][n];
    // just get the location of the 1 
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                x=i;
                y=j;
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    // moves required to be in center is (2,2)
    cout<<abs(x-2) + abs(y-2)<<endl;

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
