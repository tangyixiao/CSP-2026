#include<bits/stdc++.h> 
using namespace std;
int n,m,num,c[12345678],d[12345678],e[12345678],vis;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<=12345676;i++){
		c[i]=0;
		d[i]=0;
		e[i]=0;
	} 
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		num=i;
		for(int j=i;j<=n;j++){
			for(int k=i;k<j;k++){
				if(d[k]==c[j]){
					for(int l=k+1;l<=num;l++){
						d[l]=0;
					}
					num=k+1;
					vis=1;
				}
			}
			if(vis==0){
				d[num]=c[j];
				num+=1;
			}
			vis=0;
		}
		for(int j=i;j<num;j++){
			e[d[j]]+=1;
			d[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<e[i]<<' ';
	}
}
