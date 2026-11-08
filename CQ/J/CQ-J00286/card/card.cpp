#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+10;
const int M=3*1e5+10;
int n,m;
int pu[N];
vector<int>f[M];
int h[M];
int ne[N];
int la[N];
vector<int>v;
int ans[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>pu[i];
	} 
	for(int start=1;start<=n;start++){
		v.clear();
		for(int i=1;i<=m;i++)f[i].clear();
		vector<int>now;
		now.push_back(0);
		memset(la,0,sizeof(la));
		memset(ne,0,sizeof(ne));
		ne[start-1]=start;
		la[n+1]=n;
		vector<int>cnt(m+1,0);
		for(int i=start;i<=n;i++){
			now.push_back(pu[i]);
			ne[i]=i+1;
			f[pu[i]].push_back(i);
			cnt[pu[i]]++;
			la[i]=i-1;
			if(cnt[pu[i]]>1){
				for(int j:f[pu[i]]){
					if(j==i)break;
					ne[la[j]]=ne[ne[j]];
					la[ne[ne[j]]]=la[j];
					now[j]=0;
					now[ne[j]]=0;
					cnt[pu[i]]--;
					cnt[pu[ne[j]]]--;
				}
				
			}
//			for(int k:now)cout<<k<<' ';
//			cout<<endl;
		}
		vector<int>f(m+1,0);
//		cout<<cnt<<endl;
		for(int i:now){
//			cout<<i<<' '<<endl;
			if(!f[i]){
				ans[i]++;
				f[i]=1;
			}
			
		}
		
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}

