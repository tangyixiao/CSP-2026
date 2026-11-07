#include <bits/stdc++.h>
using namespace std;
int n,m,c[500005],d[500005];
char b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		string a;
		for(int j=1;j<=m;j++)c[j]=0;
		for(int j=i;j<=n;j++){
			if(c[b[j]-'0']==1){
				a.erase(a.find(b[j]),a.size()-1);
				a+=b[j];
			}
			else{
				a+=b[j];
				c[b[j]-'0']=1;
			}
		}
		for(int j=0;j<a.size();j++){
		    d[a[j]-'0']++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
