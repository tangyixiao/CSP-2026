#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],pile[500001],r,ans[300001];
bool flag=1;
int check(int x){
	for(int p=1;p<=r;p++)
		if(pile[p]==x)
			return p;
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i])
			flag=0;
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		int cnt1=0,cnt2=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[n]){
				cnt1++;
				cnt2++; 
			}
			else if(a[i]==1)
				cnt1++;
			else
				cnt2++;
		}
		cout<<cnt1<<" "<<cnt2;
		return 0;
	}
	if(flag){
		for(int i=1;i<=n;i++){
			if(i==n)
				cout<<n;
			else if(a[i]<a[i+1])
				cout<<i<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		r=0;
		for(int j=i;j<=n;j++){
			int x=check(a[j]);
			if(!x){
				r++;
				pile[r]=a[j];
			}
			else
				r=x;
		}
		for(int j=1;j<=r;j++)
			ans[pile[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
