#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
multiset<int> s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	vector<int> V;
	for(int i=31;i>=0;i--){
		int cnt=0;
		for(auto it=s.begin();it!=s.end();it++){
			if((*it)&(1<<i))cnt++;
		}
		if(cnt>=m){
			V.clear();
			for(auto it=s.begin();it!=s.end();it++){
				if(((*it)&(1<<i))==0){
					V.push_back(*it);
				}
			}
			for(auto x:V){
				s.erase(x);
			}
		}
//		for(auto it=s.begin();it!=s.end();it++){
//			cout<<*it<<" ";
//		}
//		cout<<"\n";
	}
	int ans=*s.begin();
	for(auto it=s.begin();it!=s.end();it++){
		if(it==s.begin())continue;
		ans&=(*it);
	}
	cout<<ans<<"\n"; 
}
