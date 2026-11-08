#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
bool flag[N];
int cnt[N];
int a[N];
long long h[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cnt[i]=0;
	}
	for(int i=1;i<=m;i++){
		flag[i]=false;
	}
	for(int i=1;i<=n;i++){
		long long ans=1;
		for(int j=i;j<=n;j++){
			if(flag[a[j]]!=true){
				h[ans]=a[j];
				ans++;
				flag[a[j]]=true;
			}
			else{
				ans=1;
				h[ans]=a[j];
				ans++;
				flag[a[j]]=false;
			}
		}
		for(int i=1;i<=m;i++){
			flag[i]=false;
		}
		for(int j=1;j<ans;j++){
			cnt[h[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
