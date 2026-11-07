#include<bits/stdc++.h> 
using namespace std;
long long a,b,c;
long long last,q=0,ans=0; 
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>a>>b;
if(b=2){
for(int i=1;i<=a;i++){
cin>>c;
if(i!=1){
last=c;
q=c&last;
if(q>=ans){
ans=q;
}
}
}
}
cout<<ans;
return 0;
}
