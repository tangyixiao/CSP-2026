#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans=-999,S=INT_MAX;
vector< vector<int> > c(3000001);
bool cmp(int a,int b){
	return a>b;
}
bool v[N]; 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and4.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		S=S&a[i];
		/*int pt=1,maxpt=-999,tmp=a[i];
		while(tmp){
			if(tmp&1){
				//c[pt].push_back(a[i]);
				maxpt=max(maxpt,pt);
			}
			pt+=1;
			tmp>>=1;
		}
		c[maxpt].push_back(a[i]);*/
	}
	if(n==m){
		cout<<S;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;++i){
		int pt=1,maxpt=0,tmp=a[i];
		while(tmp){
			if(tmp&1){
				//c[pt].push_back(a[i]);
				maxpt=max(maxpt,pt);
			}
			pt+=1;
			tmp>>=1;
		}
		c[maxpt].push_back(a[i]);
	}
	int ans=INT_MAX,ct=0;
	for(int i=29;i>=0;--i){
		int o=c[i].size(),lct=0;
		for(auto ed:c[i]){
			if(ed!=0&&o>=2){
				ans=ans&ed;
				++ct;
				
				if(ct==m){
					cout<<ans;
					return 0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}