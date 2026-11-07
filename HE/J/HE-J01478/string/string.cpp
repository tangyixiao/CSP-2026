#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],l,r,ans=0,ln,lm,rn,rm;
char b[200005];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++)  cin>>a[i]>>b[i];
l=1,r=n;
ln=a[l],lm=b[l];
rn=a[r],rm=b[r];
while(l!=r){
long long mi=min(ln,rn);
if(lm!=rm){
ans+=mi;
}
ln-=mi;
rn-=mi;
if(ln==0){
l++;
ln=a[l],lm=b[l];
}
if(l==r)  break;
if(rn==0){
r--;
rn=a[r],rm=b[r];
}
}
cout<<ans;
fclose(stdin);
fclose(stdout);
return 0;
}
