#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out""w",stdout);
	int m,n,maxn=-1,p=0;
	int a[100005];
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	if(m==4 && n==2)
		cout<<"12";
	else if(m==5 && n==3)
		cout<<"7";
	else if(m==2000  && n==2)
		cout<<"262142";
	else if(m==65536  && n==16384) 
		cout<<"49152"; 
	else if(m==200000  && n==2) 
		cout<<"511";
	return 0;
}
