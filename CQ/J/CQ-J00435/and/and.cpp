#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
int n,m;
int a[N]; 
bitset<32> b[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	bitset<32> ans=0;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		b[i]=a[i];
	}
	int mx=31;
	while(1){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(b[i][mx]==1)cnt++;
		}
		if(cnt>=m||mx<=0){
			break;
		}
		mx--;
	}
	for(int i=mx;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==1)cnt++;
		}
		if(cnt<m){
			break;
		}
		for(int j=1;j<=n;j++){
			if(b[j][i]==0)b[j]=0;
			else break; 
		}
		ans[i]=1;
	}
	cout<<ans.to_ulong();
	
	return 0;
} 

