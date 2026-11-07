#include<bits/stdc++.h>
using namespace std;
int ans[1000001];
int cnt;
int cnt1;
int main(){
    freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n;
	int v[n];
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	sort(v+1,v+n+1);
	if(m==1){
		cout<<v[n];
		return 0;
	}
	else if (m==n){
		int t=2;
		while (t<=n){
			cnt=v[1];
			cnt&=v[t];
			t++;
		}
		cout<<cnt;
		return 0;
	}
	else if (m==2){
		int ds,dy;
		ds=v[n];
		dy=v[n-1];
		int ak=ds&dy;
		cout<<ak;
		return 0;
	}
	else {
		for(int i=n;i<=n-m;i++){
			int t=2;
		    while (i<=n&&i>=m){
		    	cnt1=v[i];
		    	cnt1&=v[t];
		    	t++;
			}
		}
		cout<<cnt1;
	}
	
	
	
	return 0;
} 
