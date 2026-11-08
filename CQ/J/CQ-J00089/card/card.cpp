#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int n,m,y;
int a[500008],b[500008],c[500008],d[500008];
void mm(){
	for(int x=1;x<=n;x++){
		c[x]=0;
		b[x]=0;}
	return ;
}
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++){
		mm();
		for(int j=1+i;j<=n;j++){
			c[j]=a[j];
			if(b[a[j]]+1==2){
				//É¾³ý
				y=j-1;
				while(c[y]!=a[j]){
					b[c[y]]=0;
					c[y]=0;
					y--;}
				c[y]=0;}
			else
			    b[a[j]]++;}
		//Í³¼ÆÊ£ÓàÊý×Ö
		for(int j=1;j<=m;j++){
			if(b[j]==1)
			    d[j]++;}}
	for(int i=1;i<=m;i++)
	cout<<d[i]<<" ";
	
	return 0;
} 
