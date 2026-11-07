#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];bool vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,ans=0;
	
	cin>>n>>m;
	int c=n,cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}for(int i=30;i>=0;i--){
		cnt=0;
		for(int j=0;j<n;j++){
			if(!vis[j]){
				
				cnt+=1-bool(a[j]&(1<<i));	
			}
			
		}
		if(c-cnt>=m){
			c-=cnt;
			ans+=(1<<i);
			for(int j=0;j<n;j++){
					if(1-bool(a[j]&(1<<i))){
						vis[j]=1;
					}
			}
		}
	}
	cout<<ans;
	return 0;
} 