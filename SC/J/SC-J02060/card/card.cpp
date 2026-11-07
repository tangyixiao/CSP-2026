#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,b,ans[100005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b;
		a.push_back(b);
		if(a[i]!=a[i-1]){
			ans[i]++;
		}else{
			a.erase(a.begin()+i-1);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}