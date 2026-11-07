#include<bits/stdc++.h>
using namespace std;
long long n,m,s[8000005],a[8000005],b[8000005],ans,maxx;
void dfs(int j){
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			a[j]=s[i];
			b[s[i]]=1;
			if(j==m){
				long long f=0,c[8000005];
				memset(c,0,sizeof(c));
				for(int i=1;i<=m;i++){
					c[a[i]]++;
					if(c[a[i]]>1){
						f=1;
						break;
					}
				}
				if(f==0){
					long long sum=a[1];
					for(int i=2;i<=m;i++){
						sum=sum&a[i];
					}
					ans=max(ans,sum);
				}
				return;
			}
			else dfs(j+1);
			b[s[i]]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		maxx=max(s[i],maxx);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	dfs(1);
	cout<<ans;
	return 0;
}

