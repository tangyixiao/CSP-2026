#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],cnt,sum,maxc,s,ans=0;
bool t[200005][40],b[200005];
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n>>m;
for(int i=1;i<=n;i++){
cin>>a[i];
sum=a[i];
cnt=0;
while(sum!=0){
t[i][cnt]=sum%2;
sum/=2;
cnt++;
}
maxc=max(maxc,cnt);
}
for(int i=maxc-1;i>=0;i--){
s=0;
for(int j=1;j<=n;j++){
if(t[j][i]==1&&b[j]==0)  s++;
}
if(s==m){
ans=0;
for(int j=1;j<=n;j++){
if(t[j][i]==1&&b[j]==0){
if(ans==0){
ans=a[j];
}else{
ans&=a[j];
}
}
}
cout<<ans<<'\n';
return 0;
}else if(s>m){
for(int j=1;j<=n;j++){
if(t[j][i]==0)  b[j]=1;
}
}
}
for(int i=1;i<=n;i++){
if(b[i]==0){
if(ans==0)  ans=a[i];
else  ans&=a[i];
}
}
cout<<ans<<'\n'; 
fclose(stdin);
fclose(stdout);
return 0;
}
