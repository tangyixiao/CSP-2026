#include<bits/stdc++.h>
using namespace std;
int n,m;
bool f;
char a[500010];
int vis[500010];
string s="";
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++){
		s="";
		for(int i=k;i<=n;i++){
			f=0;
			for(int j=0;j<s.size();j++){
				if(s[j]==a[i]){
					s=s.substr(0,j);
					f=1;
					break;
				}
			}
			s+=a[i];
//			cout<<s<<' '<<i<<"\n";
		}
		for(int j=0;j<s.size();j++){
			vis[s[j]-'0']++;
		}
	}
	for(int i=1;i<=m;i++) cout<<vis[i]<<" ";
	return 0;
}
//暴力美炸了，对于剩下的能骗多少骗多少吧 
