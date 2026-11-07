#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int m,n;
int a[maxn];


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	int maxa;
	
	for(int i=1;i<=n-m;i++){
		int cnt=0;
		int res=a[i];
		for(int k=1;k<=n;k++)	
			for(int j=i+k;j<=n;j+=k){
				if(cnt==m) break;
				res=res & a[j];
				cnt++;
			}
		maxa=max(res,maxa); 
	}
	cout<<maxa;
	return 0;
}
