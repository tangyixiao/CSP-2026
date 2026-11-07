#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[200001],b[200001],ans,cnt1,cnt2=pow(2,31)-1,cnt3;
bool cmb(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt1=max(cnt1,a[i]);
		cnt2&=a[i];
	}
	if(m==1){
		cout<<cnt1;
		return 0;
	}
	if(m==n){
		cout<<cnt2;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				cnt3=max(cnt3,(a[i]&a[j]));
		cout<<cnt3;
		return 0;
	}
	sort(a+1,a+n+1,cmb);
	for(int i=1;i<m;i++)cnt3=a[i]&a[i+1];
	cout<<cnt3;
	return 0;
}

