#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[500027];
long long l=0;
long long c[500027];
set<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=5000){
		for(int i=n;i>=1;i--){
			cout<<i<<" ";
		}
		return 0;
	}
	set<int>::iterator it;
	while(1){
		l++;
		s.clear();
		if(l==n+1){
			break;
		}
		for(int i=l;i<=n;i++){
			if(s.count(a[i])){
				s.insert(a[i]);
			}
			else{
				it=s.find(a[i]);
				for(it;it!=s.end();it++){
					s.erase(*it);
				}
				s.insert(a[i]);
			}
		}
		for(it=s.begin();it!=s.end();it++){
			int u=(*it);c[u]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
