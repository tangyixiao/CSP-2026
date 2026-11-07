#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int a[500010];
int b[300010];//每种card最后出现处 
int c[300010];//每种card出现次数
int ans[300010]; 
int cs[500010];//如果当前card是最后一个所需要加的数 
int v[5000010];//这张card是上一次现
vector<int> g;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]=i;
		c[a[i]]++;
	}
	if(m<=100000){
		for(int i=1;i<=m;i++){
			for(int j=b[i];j<=n;j++){
				if(j!=b[a[j]]){
					j=b[a[j]];
				}
				ans[a[j]]+=c[i];
			}
		}//m^2 -> m logm、
	}else{
		int mn=1e18;
		for(int i=1;i<=m;i++){
			mn=min(mn,b[i]);
		}
		int mq=0,zg;
		for(int i=mn;i<=n;i++){
			//cout<<a[i]<<" ";
			if(i!=b[a[i]]){
				v[a[i]]=i;
				cs[i]=mq;
				mq=0;
			}else{
				if(v[a[i]]!=0){
					mq+=cs[v[a[i]]];
				} 
				mq+=c[a[i]];
				ans[a[i]]=mq;
			}
			//cout<<cs[i]<<" ";
		}
	}
	//cout<<endl;
	for(int i=1;i<m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<ans[m];
	return 0;
}/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

8 4
4 3 2 1 2 1 3 1

8 4
1 2 4 3 2 1 3 1

fc card.out card
*/ 