#include<bits/stdc++.h>
using namespace std;
int a[200010],t[200010];
int bin1(int x){
	int s=0;
	while(x){
		s+=x&1;
		x=x>>1;
	} 
	return s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[i]=a[i];
	}
	sort(a+1,a+n+1);
	int s=0;
	for(int i=1;i<=m;i++){
		int maxs=-1,ind;
		for(int j=1;j<=n;j++){
			if(bin1(a[j])>maxs){
				maxs=bin1(a[j]);
				ind=j;
			}
		}
		if(s==0)s=a[ind];
		else s&=a[ind];
		cout<<ind<<"\n";
		a[ind]=0;
	}
	cout<<s;
	return 0;
}
