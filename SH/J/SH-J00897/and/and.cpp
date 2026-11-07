#include<bits/stdc++.h>
using namespace std;
int m,n;
int t[200010];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(t[j]<t[j+1]){
                int y=t[j];
                t[j]=t[j+1];
                t[j+1]=y;
            }
        }
    }
    cout<<t[m-1];
    return 0;
}
