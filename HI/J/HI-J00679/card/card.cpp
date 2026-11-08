#include<bits/stdc++.h>
using namespace std;
int a[500005];
struct z{
	int z;int w;
};
map<int,int>dict;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;cin>>n>>m;
	int x=n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		set<int> s;
		for(int j=i;j<=n;j++){
			if(s.size()==0 || s.count(a[j])==0){
				dict[a[j]]++;
				s.insert(a[j]);
			}
		}
		
	}
	for(int i=1;i<=m;i++){
		if(i>1) cout<<' ';
		cout<<dict[i];
	}
	return 0;
}
