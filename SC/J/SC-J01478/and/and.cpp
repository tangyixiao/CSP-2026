#include<bits/stdc++.h>
using namespace std;
long long a[200005];
vector<long long>vec[100];
bool vis[200005];
int main (){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0)->sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ma=0;
	for(int i=1;i<=n;i++){
		long long oo=a[i];
		long long op=1;
//		cout<<i<<" : ";
		while(oo>0){
			if(oo%2==1){
//				cout<<op<<" ";
				vec[op].push_back(i);
			}
			oo/=2;
			if(oo==0)break;
			op++;
		}
//		cout<<endl;
//		cout<<i<<" "<<op<<endl;
		ma=max(ma,op);
	}
	for(int i=1;i<=n;i++){
		vis[i]=1; 
	}
	for(int i=ma;i>=1;i--){
		long long uu=0;
		vector<long long>vec2;
		for(auto cur : vec[i]){
//			cout<<cur<<" "<<vis[cur]<<endl;
			if(vis[cur]==1){
				uu++;
				vec2.push_back(cur); 
			}
		}
//		cout<<uu<<endl;
		if(uu>=m){
			for(int i=1;i<=n;i++){
				vis[i]=0;
			}
			for(auto cur:vec2){
				vis[cur]=1;
//				cout<<i<<" : "<<cur<<endl;
			}
		}
	} 
	long long ans=0; 
	for(int i=1;i<=n;i++){
		if(vis[i]==1){
			if(ans==0){
				ans=a[i];
			}else{
				ans=ans&a[i];
			}
		}
	}
	cout<<ans;
	return 0;
	
}