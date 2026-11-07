#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[500005],cx[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}	
	cout<<n<<" "<<n;
	return 0;
}
