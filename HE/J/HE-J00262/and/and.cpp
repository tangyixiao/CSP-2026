#include<bits/stdc++.h>
using namespace std;
long long a[1000011];
int num(int k){
	int t=0;
	while(k) k/=2,t++;
	return t;
} 
int numof1(int k){
	int t=0;
	while(k) t+=k%2,k/=2;
	return t;
}
bool cmp(int x,int y){
	if(num(x)==num(y)) return numof1(x)>numof1(y);
	return num(x)>num(y);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	long long ans=a[1];
	for(int i=1;i<=m;i++)
		ans&=a[i];
	cout<<ans; 
	return 0;
}
