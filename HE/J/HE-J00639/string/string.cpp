#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string u="";
    while(n--){
        int a;char c;
        cin>>a>>c;
        while(a--)u+=c;
    }
    string t(u.rbegin(),u.rend());
    int cut=0;
    for(int i=0;i<u.size();i++){
        if(u[i]!=t[i])cut++;
    }
    cut/=2;
    cout<<cut;
    return 0;
}
