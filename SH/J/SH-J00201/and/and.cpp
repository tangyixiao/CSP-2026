#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
//	if(m==1){
//		cout<<a[n];
//		return 0; 
//	}
	int s;
	for(int i=n;m>=1;i--,m--){
		if(i==n) s=a[i];
		if((s&a[i])!=0) s&=a[i];
		
	}
	cout<<s;
	return 0;
}
