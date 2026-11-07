#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m;
int a[N],b[N],c[N],ans[N];
int chang(){
	int i=1;
	while(c[i]!=0){
		i++;
	}
	return i-1;
}
void push(int x){
	int len=chang();
	c[len+1]=x;
}
void pop(){
	int len=chang();
	c[len]=0;
}
int kan(){
	int len=chang();
	return c[len]; 
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++){
		for(int i=0;i<=m;i++) b[i]=0,c[i]=0;
		for(int i=k;i<=n;i++){
			if(b[a[i]]==0){
				push(a[i]);
				b[a[i]]=1;
			}
			else{
				while(kan()!=a[i]){
					b[kan()]=0;
					pop();
				}
				
			}
		}
		for(int i=1;i<=m;i++){
			if(b[i]==1) ans[i]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
} 
