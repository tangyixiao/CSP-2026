#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
using ll=long long;
int n,m;
int a[N];
bool vis[N];
queue <int> q;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int lg=30;lg>=0;lg--){
		int nm1=0;
		for(int i=1;i<=n;i++){
			if(vis[i])continue;
			if(a[i]&(1<<lg))nm1++;
			else q.push(i);
		}
		if(nm1>=m){
			while(!q.empty()){
				vis[q.front()]=1;
				q.pop();
			}
		}
		while(!q.empty())q.pop();
	}
	int ans;
	int nm=0;
	for(int i=1;i<=n;i++){
		//cout<<vis[i]<<" ";
		if(!vis[i]&&nm==0){
			ans=a[i];
			nm++;
		}
		else if(!vis[i]){
			ans&=a[i];
			nm++;
		}
		if(nm==m)break;
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
