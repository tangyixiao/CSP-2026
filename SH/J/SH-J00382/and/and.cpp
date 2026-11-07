#include<bits/stdc++.h>
using namespace std;
struct t{
	int num;
	int in2=0;
}a[200005];
int in2(int n){
	int ans=0;
	while(n!=0){
		ans+=n%2;
		n/=2;
	}
	return ans;
}
bool cmp(t a,t b){
	if(a.in2!=b.in2)return a.in2>b.in2;
	else return a.num>b.num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].in2=in2(a[i].num);
	}
	sort(a+1,a+n+1,cmp);
	int ans;
	for(int i=1;i<=m;i++){
		if(i==1)ans=a[i].num;
		else ans=ans&a[i].num;
	}
	cout<<ans;
}
