#include<bits/stdc++.h>
using namespace std;
int n,m,a[500009],b[300009],pai[300009]={},psl=0;
bool zd(int x){
	for(int i=0;i<psl;i++)if(pai[i]==x)return 1;
	return 0;
}
int wz(int x){
	for(int i=0;i<psl;i++)if(pai[i]==x)return i;
	return -1;
}
void s1(){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(zd(a[j])){
				for(int k=wz(a[j]);k<=psl;k++){
					pai[k]=0;
					psl--;
				}
				pai[psl]=a[j];
				psl++;
			}
			else{
				pai[psl]=a[j];
				psl++;
			}
		}
		for(int i=0;i<psl;i++)b[pai[i]]++;
		pai[300009]={};
		psl=0;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=500)s1();
	else s1;
	return 0;
} 
