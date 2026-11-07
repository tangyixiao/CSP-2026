#include<bits/stdc++.h>
using namespace std;
int n,a,x,cnt=0;
string t,b;
int main(){
    //freopen("string.in","r",stdin);
    //freopen("string.out","w",stdout);
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a>>b;
        for(int i=1;i<=a;i++){
        t+=b;
    }
    }
    for(int i=0;i<t.length();i++)
       x++;
    for(int i=0;i<t.length();i++){
       if(t[i]!=x-i){
        t[i]=x-i;
        cnt++;
       }
       else cnt+=0;
    }
    cout<<cnt;
   return 0;
}
