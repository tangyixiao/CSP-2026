#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=5e5+5;
const int N=3e5+5;
int a[maxn],zm[maxn],zj[maxn];
int b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(zm,0,sizeof(zm));
		memset(b,0,sizeof(b));
		int cc=0;
		for(int j=i;j<=n;j++){
			int k=a[j];
			if(b[k]==0){
				zm[++cc]=k;
				b[k]=j;
			}else{
				cc=b[k];
			}
		}
		for(int j=1;j<=cc;j++){
			zj[zm[j]]++;
		}
	}
	int i=1;
	while(i<=m){
		cout<<zj[i]<<' ';
		i++;
	}
	return 0;
}
