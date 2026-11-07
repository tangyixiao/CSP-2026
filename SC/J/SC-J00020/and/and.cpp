#include<bits/stdc++.h>
using namepaces std;
vector<int> s;
bool cmp(int A,int B){
    retrun A>B;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","r",stdont);
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    cerr << '6';
    sort(s.begin(),s.end(),cmp);
    int z=s[0];
    for(int i = 1;i < m; i++){
        z& = s[i];
    }
    cout << z;
    return 0;
}
