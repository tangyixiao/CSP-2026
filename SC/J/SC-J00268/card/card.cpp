#include<bits/stdc++.h>
using namespace std;
char a[300005];
bool f[300005];
int cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(f,0,sizeof(f));
		string s="";
		for(int j=i;j<=n;j++){
				s+=a[j];
			if(f[a[j]]==0){
				f[a[j]]=1;
			}else{
				int x=s.find(a[j]);
				s=s.substr(0,x+1);
			}
		}
		for(int j=1;j<=m;j++){
			string c=to_string(j);
			if(s.find(c)<2e9){
				cnt[j]++;
			}
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}