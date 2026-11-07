#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,m;
    long long h=0;
    string l,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>l;
        for(int i=0;i<m;i++){
            s+=l;
        }
    }
    int p=s.size();
    for(int i=0,j=p-1;i<=p/2;i++,j--){
        if(s[i]!=s[j]){
            h++;
        }
    }
    cout<<h;
    return 0;
}
