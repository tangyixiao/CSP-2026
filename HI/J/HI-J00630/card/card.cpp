#include<bits/stdc++.h>
using namespace std;
bool pp[500005];
int a[500005],x[300005],b[300005];
int main() {
//unordered_set<int> f;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		unordered_set<int> f;
		for(int i=1;i<=n;i++) pp[i]=0;
		for(int j=i; j<=n; j++) {
			
			if(f.find(a[j])!=f.end()) {
				int l=j-1;
//				cout<<"kkkk"<<' '<<i<<' '<<endl<<"j="<<j<<' '<<"a[j]="<<a[j]<<endl;
				while(a[l]!=a[j]||pp[l]) {
					if(!pp[l]) {
						b[a[l]]--;
						pp[l]=1;
						f.erase(a[l]);
						
					}l--;
				}
			} else {
				b[a[j]]++;
				f.insert(a[j]);
			}
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<b[i]<<' ';
	}
	return 0;
}
