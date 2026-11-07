#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[2000005],cnt[2000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	for(int i=1;i<=n;++i){
		vector<int> b(n+1,0);
		for(int j=i;j<=n;++j){
			b[j] = a[j];
			bool f=1;
			for(int k=1;k<=j;++k){
				if(b[k] == b[j]||f==0){
					f=0;
					b[k] = 0;
				}
			}
			b[j] = a[j];
		}
		for(int j=i;j<=n;++j)
			if(b[j] !=0) ++cnt[b[j]];
	}
	for(int i=1;i<=m;++i)
		cout << cnt[i] << ' ';
	return 0;
}
