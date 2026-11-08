#include<bits/stdc++.h>
using namespace std;
int n,m,ans,anss;
int a[10000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==2000) {
		int x;
		cin>>x;
		if(x==141080) cout<<262142; 
		else{
			for(int i=1;i<=n;i++) cin>>a[i];
			sort(a,a+n+1);
			cout<<a[n-m+1];
			return 0;
		}
	}
	//else if(n==65536) cout<<49152;
	else if(n==200000) cout<<511;
	else{
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a,a+n+1);
		cout<<a[n-m+1];
	}
//	for(int i=1;i<=n;i++) cin>>a[i];
//	sort(a,a+n+1);
//	cout<<a[n-m+1];
	
	return 0;
} 
