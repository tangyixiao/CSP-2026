#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card1.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[500000];
	for(int i=1;i<=n;i++)cin>>a[i];
	int cnt[300000]={};
	stack <int> c;
	int y[300000]={};
	
	for(int ii=0;ii<n;ii++){
		memset(y,0,sizeof(y));
		for(int i=ii;i<n;i++){
			if(y[a[i]]==0){
				c.push(a[i]);
				y[a[i]]=1;
			}
			else {
				while(1){
					if(c.top()==a[i])break;
					else c.pop();
				}
				memset(y,0,sizeof(y));
				y[a[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(y[i]==1)cnt[i]+=1; 
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}