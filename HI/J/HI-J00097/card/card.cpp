#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[500005];
long long f[300005];
long long ns[300005];
bool tza=1;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]++;
		if(f[a[i]]>1) tza=0;
	}
	if(tza){
		for(int i=1;i<=m;i++){
			cout<<n<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int p=1;
		for(int j=1;j<=m;j++){
			f[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(!f[a[j]]){
				f[a[j]]=p;
				p++;
			}else{
				for(int k=1;k<=m;k++){
					if(f[k]>f[a[j]]){
						f[k]=0;
					}
				}
				p=f[a[j]]+1;
			}
		}
		for(int k=1;k<=m;k++){
			if(f[k]) ns[k]++; 
		}
	}
	for(int j=1;j<=m;j++){
		cout<<ns[j]<<' ';
	}
	return 0;
}
