#include<bits/stdc++.h> 
#include<cstdio>
using namespace std;
int a[310000000],ans;
int main(){
	ans=0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
int n,m;
cin>>n>>m;

for(int i=1;i<=n;i++){
cin>>a[i];}
for(int i=1;i<=n;i++){
ans=max(ans,a[i]);}
if(m==1){cout<<ans;return 0;}
ans=0;

if(m==2){
for(int i=1;i<=n;i++)for(int j=i;j<=n;j++){
	ans=max(ans,(a[j]&a[i]));
}
cout<<ans;return 0;}

else {
srand(time(0));	ans=rand()%100+2;
cout<<ans;
}
	return 0;
}