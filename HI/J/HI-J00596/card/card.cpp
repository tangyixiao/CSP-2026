#include<bits/stdc++.h>
using namespace std;
int b[310000];
string c="",a[510000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c.find(a[j])!=-1){
				for(int k=c.find(a[j]);k<=c.size();k++) c[k]='\0';
			}
			else{
				for(int k=0;k<a[j].size();k++) c=c+a[j][k];
			}
		}
		int k=1;
		while(c.size()){
			b[c[k]-'0']++;
			k++;
			c[k]='\0';
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	return 0;
}
