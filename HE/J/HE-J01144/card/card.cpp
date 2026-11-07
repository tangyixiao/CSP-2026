#include<bits/stdc++.h>
using namespace std;
const int N=5e5+50;
long long n,m,a[N];
long long c[N];
long long k[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	vector<int> v;
	for(int j=1;j<=n;j++){
		memset(c,0,sizeof(c));
		v.clear();
		for(int i=j;i<=n;i++){
			if(!c[a[i]]){
				v.push_back(a[i]);
				c[a[i]]++;
			}else{
				for(int k=0;k<v.size();k++){
					c[v[k]]--;
				}
				v.clear();
				v.push_back(a[i]);
				c[a[i]]=1;
			}
		}
		for(int i=0;i<v.size();i++){
			k[v[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<" ";
	}
	return 0;
}
