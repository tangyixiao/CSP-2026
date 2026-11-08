#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
	long long n,m,cnt=1,cntx=0;
	cin>>n>>m;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=0;i<m;i++){
		sort(a,a+n);
		a[0]++; 
		for(long long i=0;i<n;i++){
			int aj=a[i];
			for(long long j=0;j<n;j++){
				if(aj==a[j])cntx++;
			}
		cnt=max(cnt,cntx);
		cntx=0;
		}
	} 
	cout<<cnt;
	return 0;
}
