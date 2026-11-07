#include<bits/stdc++.h>
using namespace std;
int a[11000005];
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,c2,s1,s2;
    cin >> c1 >> c2 >> s1 >> s2;
    int ans = 0;
    if(c1 != c2) cout << 0;
    else cout << 1;
    if(s1 != s2-1) cout << 0;
    else cout << 1;
    if(s1 != s2+1) cout << 0;
    else cout << 1;
    int A,B,C,D,F;
    cin >> A >> B >> C >> D >> F;
    if(A && B || B && C || D && F) cout << 1;
    else cout << 0;
    return 0;
}
