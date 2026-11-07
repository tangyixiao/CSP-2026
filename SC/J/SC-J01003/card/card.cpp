#include <bits/stdc++.h>
using namespace std;
const int N=5e5+9;
map <int,int> mp;
int m,n,a[N];
int main(){
	std::ios::sync_with_stdio(false);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack <int> s;
		map <int,bool> q;
		for(int j=i;j<=n;j++){
			if(q[a[j]]==0){
				s.push(a[j]);
				q[a[j]]=1;
			} else {
				while(s.top()!=a[j]){
					q[s.top()]=0;
					s.pop();
				}
			}
		}
		while(s.size()>0){
//			cout<<s.top()<<" ";
			mp[s.top()]++;
			s.pop();
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		if(i==1) cout<<mp[i];
		else cout<<" "<<mp[i];
	}
	return 0;
}