#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,len;
int a[N][40];
bool vis[N];
int ans[40];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int w;
		cin>>w;
		int id=1;
		while(w>2){
			a[i][id]=w%2;
			w/=2;
			//cout<<w<<endl;
			id++;	
		}a[i][id]=w;
		len=max(len,id);
		//cout<<endl;
	}
	
	for(int i=len;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(vis[j]) continue;
			cnt+=a[j][i];
		}
		if(cnt>=m){
			ans[i]=1;
			for(int j=1;j<=n;j++){
				if(a[j][i]==0) vis[j]=true;
			}
		}
	}
	
	int san=0;
	for(int i=len;i>=1;i--){
		san+=ans[i]*pow(2,i-1);
	}
	cout<<san;
//	for(int i=len;i>=1;i--){
//		cout<<ans[i];
//	}
	
	
	return 0;
} 
/*
4 2
3 15 12 12


5 3
31 3 1 15 7
*/
