#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans[200005];
vector<int> v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
		for(int i=1;i<=n;i++){
			if(v.empty()){
				ans[i]++;
				v.push_back(a[i]);

			}
		}
		for(int i=1;i<=n;i++){
			cout<<ans[i];
		}
}
