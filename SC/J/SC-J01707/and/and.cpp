#include<bits/stdc++.h>
using namespace std;
long long a[200005],v[200005],ans=-1,n,m,s1;
void dfs(int m1,int s,int p){
 		
		if(m==0) return;
		for(int i=p+1;i<=n;i++){
			if(v[i]==0) {
				v[i]=1;
				s1=s;
				s&=a[i];
				dfs(m1-1,s,i);
				if(s>ans) ans=s;
				s=s1;
				v[i]=0;
			}
		}
		
	}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	if(m==1){
		long long mx=-1;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}cout<<mx;
		return 0;
	}if(m==n){
		int s1=a[1];
		for(int i=2;i<=n;i++){
			s1&=a[i];
		}cout<<s1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		dfs(m-1,a[i],0);
	}
	
	cout<<ans;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}