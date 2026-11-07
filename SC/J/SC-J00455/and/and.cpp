#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m;
struct stu{
	ll val,er;
};
stu a[200005];
bool cmp(stu a,stu b){
	if(a.er!=b.er){
		return a.er>b.er;
	}
	else return a.val>b.val;
}
int func(int n){
	int sum=0;
	int t=n;
	while(t){
		sum+=t%2;
		t/=2;
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].val;
		a[i].er=func(a[i].val);
	}
	sort(a+1,a+1+n,cmp);
	int ans=a[1].val;
	for(int i=2;i<=m;i++){
		ans&=a[i].val;
	}
	cout<<ans;
	return 0;
}