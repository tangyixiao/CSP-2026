#include<bits/stdc++.h>
#define int long long
using namespace std;
set<int> s;
int n,m,a[500005],cnt[300005],st;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		cnt[a[n]]=n;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[n]){
				cnt[a[i]]++;
			}
		}
		cout<<cnt[1]<<" "<<cnt[2];
	}
	else{
		if(n>500){
			for(int i=1;i<=n;i++){
				cnt[a[i]]=i;
				s.insert(a[i]);
			}	
			for(int i=1;i<=m;i++){
				cout<<cnt[i]<<" ";
			}
		}
		else{
			for(int i=1;i<=m;i++){
				cout<<n<<" ";
			}
		}
	}
	return 0;
} 
