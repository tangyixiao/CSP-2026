#include<bits/stdc++.h>
using namespace std;
string a, b, c, d;
bool ansa, ansb, ansc, ansd;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin>>a>>b>>c>>d;
    if(a == c) ansa = 1;
    if(ansa and b[0] == d[0] and b[1] == d[1])ansb = 1;
    if(ansb and ((b [2] >= 'A' and b[2] <='C' and d[2] >='A' and d[2] <= 'C') or (b [2] >= 'D' and b[2] <='F' and d[2] >='D' and d[2] <= 'F'))) ansc = 1;
    if(ansc and ((b[2] - d[2]) == 1 or (b[2] - d[2] == -1)) ) ansd = 1;
    cout<<ansa<<ansb<<ansc<<ansd;
    return 0;
}