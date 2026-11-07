#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001],sum[1000001],v,used[1000001];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(used[a[i]]==0){
			v++;
		}
		used[a[i]]++;
	}
	for(int i=1;i<=v;i++){
		if(used[a[i]]==1){
			cout<<n<<" ";
		}
	}
	return 0;
}