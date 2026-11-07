/*#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,all[500009]={},ot[500009]={};
int main(){
	freopen("card1.in","r",stdin);
	freopen("card1.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>all[i];
	}
	for(int i=1;i<=n;i++){
		int p=0,y=0,z[500009]={};
		for(int j=i;i<=n;j++){
			for(int q=1;q<=y;q++){
				if(z[q]==all[j]){
					p=1;
					y=q;
					return 0;
				}
			}
			if(p==1){
				p=0;
			}
			else{
				y++;
				z[y]=all[j];
			}
		}
		for(int j=1;j<=y;j++){
			ot[z[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ot[i]<<' ';
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,all[500009]={},ot[500009]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>all[i];
	}
	for(int i=1;i<n;i++){
		int y=0,p=0,z[500009]={};
		for(int j=i;j<=n;j++){
			for(int q=1;q<=y;q++){
				if(z[q]==all[j]){
					y==q;
					p==1;
					break;
				}
			}
			if(p==0){
				y++;
				z[y]=all[j];
			}
			else{
				p==0;
			}
		}
		for(int j=1;j<=y;j++){
			ot[z[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ot[i]<<' ';
	}
	return 0;
}
