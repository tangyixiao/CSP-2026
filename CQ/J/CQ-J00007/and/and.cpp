#include<bits/stdc++.h>
using namespace std;
#define int long long
bitset<200005> a[31];
bitset<200005> ans;
int num[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k;
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		int x;
		cin>>x;
		num[i]=x;
		for (int j=30;j>=0;j--){
			if ((x>>j)&1){
				a[j][i]=1;
			}
		}
	} 
	bool ok=1;
	int out=0;
	for (int i=30;i>=0;i--){
		if (ok){
			if (a[i].count()>=k){
				ans=a[i];
				out+=(1<<i);
				ok=0;
			}
		}else{
			if ((ans&a[i]).count()>=k){
				ans&=a[i];
				out+=(1<<i);
			}
		}
	}

	cout<<out;
}
/*
5 3
31 3 1 15 7


*/
