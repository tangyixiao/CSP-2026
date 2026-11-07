#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[5000005];
int flog=0;
int t[1005000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])flog=1;
		t[a[i]]++;
	}
	if(flog==0){
		for(int i=1;i<=m;i++){
			cout<<i+t[a[i]]-1<<" ";
		}
	}else if(m==1){
		cout<<n;
	}else if(m==2){
		cout<<n-1<<" "<<n;
	}
	return 0;
}