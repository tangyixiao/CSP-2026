#include<bits/stdc++.h>
using namespace std;
int n,m,p[500010];
vector<int>g[500010];
set<int>s[500010];
bool fd(int st,int x){
	for(int i=st+1;i<=n;i++){
		if(p[i]==x)return 1;
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	s[p[1]].insert(0);
	for(int i=2;i<=n;i++){
		bool flag=0;
		for(int j=i-1;j>=1;j--){
			flag=1;
			if(fd(i,p[j])){
				for(int k=j;k<i;k++){
					s[p[i]].insert(k);
				}
				break;
			}
			if(!flag&&j==1)
			{
				for(int k=0;k<i;k++){
					s[p[i]].insert(k);
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i].size()<<" ";
	}
	return 0;
}
