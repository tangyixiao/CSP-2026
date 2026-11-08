#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,a[200001];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int mx=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	if(m==1) cout<<mx;
	else{
		int s=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j) s=a[i]&a[j];
			}
		}
		cout<<s; 
	}
	return 0;
}
