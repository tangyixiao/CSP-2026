#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,m;
	cin>>n>>m;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long i=1;
	while(m>0){
		m-=(a[i]-a[i-1])*i;
		i++;
	}
	long long cnt=0;
	for(long long j=0;j<n;j++){
		if(a[j]==a[i]){
			cnt++;
		}
	}
	cout<<i+cnt-1;
	return 0;
}
