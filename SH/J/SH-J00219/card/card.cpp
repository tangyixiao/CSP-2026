#include<bits/stdc++.h>
using namespace std;
int a[500010],cn[300010],p[500010],c;
int find(int x){
	for(int i=1;i<=c;i++)if(p[i]==x)return i;
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int f=find(a[j]);
			if(find(a[j])!=-1){
				for(int k=f;k<=c;k++){
					p[k]=0;
				}
				c=f+1;
				p[f]=a[j];
			}
			else{
   	   	   	   	c++;
				p[c]=a[j];
			}
		}
		for(int j=1;j<=c;j++)cn[p[j]]++;
		c=0;
	}
	for(int i=1;i<=m;i++){
		cout<<cn[i]<<' ';
	}
	return 0;
}
