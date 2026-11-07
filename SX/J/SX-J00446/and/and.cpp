#include<bits/stdc++.h>
using namespace std;
int n,m,sum[35],a[200005];bool b[200005][35];
queue<int>q,lq;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push(i);
		int mo=1073741824;
		for(int j=1;j<31;j++){
			if(a[i]&mo){
				b[i][j]=1;
			}
			mo/=2;
			sum[j]+=b[i][j];
		}
	}
	int qq=0;
	while(sum[++qq]<m){
	}
	for(int i=qq;i<31;i++){
		if(sum[i]<m){
			continue;
		}
		while(!q.empty()){
			int id=q.front();q.pop();
			if(b[id][i]){
				lq.push(id);
			}
		}
		q=lq;
		memset(sum,0,sizeof(sum));
		int mo=1073741824;
		while(!q.empty()){
			int id=q.front();q.pop();
			if(a[i]&mo){
				b[id][i]=1;
			}
			mo/=2;
			sum[i]+=b[id][i];
		}
		q=lq;
	}
	int ans=INT_MAX;
	while(!q.empty()){
		int id=q.front();q.pop();
		ans&=a[id];
	}
	cout<<ans;
    return 0;
}