#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,m,x;
	cin>>n>>m;
	vector<int> lis(n,0);
	vector<ll> sum(m+1,0);
	for(int i=0;i<n;i++){
		cin>>lis[i];
	}
	for(int st=0;st<n;st++){
		int i=-1;
		vector<int> a(n,0),qi(m,-1);
		vector<bool> ist(m,false);
		for(int t=st;t<n;t++){
			x=lis[t];
			if(!ist[x]){
				i++;
				a[i]=x;
				ist[x]=true;
				if(qi[x]==-1)	qi[x]=i;
			}else if(ist[x]){
				for(int j=qi[x]+1;j<=i;j++){
					ist[a[j]]=false;
					qi[a[j]]=-1;
				}
				i=qi[x];
			}
		}
		for(int j=0;j<=i;j++){
			sum[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}

