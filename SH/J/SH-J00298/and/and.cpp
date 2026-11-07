#include<bits/stdc++.h>
using namespace std;
int a[200005],f[200005];
bool v[200005];
int n,m;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int mai=0,maj=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			if(a[i]&a[j]>f[2]){
				mai=i;
				maj=j;
				f[2]=a[i]&a[j];
			}
		}
	}
	v[mai]=v[maj]=1;
	for(int i=3;i<=m;i++){
		int ma=0;
		for(int j=1;j<=n;j++){
			if(!v[j])
			if(f[i-1]&a[j]>ma){
				maj=j;
				ma=f[i-1]&a[j];
			}
		}
		f[i]=ma;
		v[maj]=1;
	}
	cout<<f[m];
	return 0;
}
