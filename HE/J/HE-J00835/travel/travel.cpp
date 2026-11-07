#include<bits/stdc++.h>
using namespace std;
string a,a1,b,b1;
int ans[10];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","r",stdout);
    cin>>a>>a1>>b>>b1;
    if(a==b){
        ans[0]=1;
        if(a1[0]==b1[0]&&a1[1]==b1[1]){
            ans[1]=1;
            if(((a1[2]>='A'&&a1[2]<='C')&&(b1[2]>='A'&&b1[2]<='C'))||((a1[2]>='D'&&a1[2]<='F')&&(b1[2]>='D'&&b1[2]<='F'))){
                ans[2]=1;
                if(abs((int)a1[2]-(int)b1[2])==1)ans[3]=1;
                else ans[3]=0;
            }
            else ans[2]=0;
        }
        else ans[1]=0;
    }
    else ans[0]=0;
    for(int i=0;i<=3;i++){
        cout<<ans[i];
    }
    cout<<endl;
}
