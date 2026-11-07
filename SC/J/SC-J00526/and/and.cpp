#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n,m;
int a[10005]; 
int b[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<m;k++){
				b[i]=a[i]&a[j];
			}
		}
	}
	int ma=INT_MIN;
	for(int i=1;i<=n;i++){
		ma=max(b[i],ma);
//		cout<<b[i]<<" ";
	}
	cout<<ma;
	return 0;
} 