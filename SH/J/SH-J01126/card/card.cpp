#include<bits/stdc++.h>
using namespace std;
const int N=5e5+9;
const int M=2e5+9;
int n,m,a[N];
struct Node{
	int st,ed;
	int sum;
}c[M];//呐呐，oi生涯还是没有圆满啊…… 
vector<int> v;
int cnt[M],lst[M],nxt[M],ans[N];
void dfs(int l,int r){
	cout<<"1"<<endl;
	if(l==n) return;
	if(nxt[l]==-1){
		cout<<"2"<<endl;
		dfs(l+1,r);
		v[a[l]]=1;
		for(int i=1;i<=m;i++) ans[i]+=v[i];
	}
	else{
		dfs(nxt[l]+1,r);
		for(int i=l+1;i<nxt[l];i++){
			v[a[i]]=0;
		}
		v[a[l]]=1;
		for(int i=1;i<=m;i++) ans[i]+=v[i];
	}

}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof(cnt));
		memset(nxt,0,sizeof(nxt));
		memset(lst,0,sizeof(lst));
		for(int j=n;j>=i;j--){
			if(lst[a[j]]==0){
				nxt[j]=-1;
				lst[a[j]]=j;
			}
			else{
				nxt[j]=lst[a[j]];
				lst[a[j]]=j;
			}	
		}
		//for (int j=1;j<=n;j++) cout<<nxt[j]<<" ";
		//cout<<endl;
		for(int j=i;j<=n;j++){
			//cout<<j<<" ";
			cnt[a[j]]=1; 
			if(nxt[j]!=-1) j=nxt[j]-1;
		}
		//cout<<endl;
		//for(int j=1;j<=m;j++) cout<<cnt[j]<<" ";
		//cout<<endl;
		for(int j=1;j<=m;j++) ans[j]+=cnt[j];
	}
	//for(int i=1;i<=n;i++) cout<<nxt[i]<<" ";
	//cout<<endl; 
	//dfs(1,n);
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
			
