#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
string s=" ";
int n,m,a[N],pos,t,is[N],vis[N],p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int time=1;time<=n;time++){
		memset(vis,0,sizeof(vis));
		for(int pos=time;pos<=n;pos++){
			char c=a[pos]+'0';
			if(vis[a[pos]]){
				p=s.find(c);
//				cout<<"p="<<p<<'\n';
				s.erase(p+1);
//				cout<<"ok s="<<s<<'\n';
			}
			else{
				s+=c;
				vis[a[pos]]=1;
			}
			for(int i=1;i<=s.size();i++){
				t=s[i]-'0';
				is[t]++;
			}
		}
//		cout<<"s="<<s<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<is[i]<<" ";
	}
	return 0;
}