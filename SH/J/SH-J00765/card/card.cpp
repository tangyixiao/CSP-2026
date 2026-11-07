#include<iostream>
using namespace std;
const int maxN=5002;
const int maxM=3002;
int a[maxN],c[maxN],ans[maxN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		int s=0;
		for (int j=i;j<=n;j++){
			for (int x=s-1;x>=0;x--){
				if (c[x]==a[j]){
					s=x;
					break;
				}
			}
			c[s]=a[j];
			s++;
		}
		for (int i=0;i<s;i++){
			ans[c[i]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	cout<<endl;
}
