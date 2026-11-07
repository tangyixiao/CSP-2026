#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],ans1,ans2,ans3;
bool cmp(int x,int y){return x>y;}
bool cmp2(int x,int y){
	if(y*2<=x)return 1;
	if(x*2<=y)return 0;
	int lth=1,ct=1,b=0,c=0;
	while(ct<=max(x,y)){
		lth++;ct*=2;
	}
	for(int i=lth-1;i>0;i--){
		if(!((x<<i)&1))b++;
		if(!((y<<i)&1))c++;
	}
	return b<c;
}
bool cmp3(int x,int y){
	int lth=1,ct=1,b=0,c=0;
	while(ct<=max(x,y)){
		lth++;ct*=2;
	}
	for(int i=lth-1;i>0;i--){
		if(!((x<<i)&1))b++;
		if(!((y<<i)&1))c++;
	}
	return b<c;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	ans1=a[1];
	for(int i=2;i<=m;i++){
		ans1=ans1&a[i];
	}
	sort(a+1,a+n+1,cmp2);
	ans2=a[1];
	for(int i=2;i<=m;i++){
		ans2=ans2&a[i];
	}
	sort(a+1,a+n+1,cmp3);
	ans3=a[1];
	for(int i=2;i<=m;i++){
		ans3=ans3&a[i];
	}
	cout<<max(ans1,max(ans2,ans3));
	return 0;
}
