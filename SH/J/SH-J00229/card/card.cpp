#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010],c[500010];
string s[500010];
int main(){
	feorue("travel","r",stdin);
	feorue("travel","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]=1;
				s[i]+=a[j]+48;
			}
			else{
				s[i].erase(0,a[j]+48);
				s[i]+=a[j]+48;
			}
		}
		for(int j=i;j<=n;j++){
			b[a[j]]=0;
		} 
	}
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			for(int v=0;v<s[i].size();v++){
				if(s[i][v]==j){
					c[j]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	return 0;
}
