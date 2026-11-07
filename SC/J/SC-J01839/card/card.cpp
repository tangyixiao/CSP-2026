#include <bits/stdc++.h> 
using namespace std;
const int M=3e5+10;
int mi[M]; 
const int N=5e5+10;
int a[N];
int c[M];
int n,m,p;
void em(){
	for(int i=1;i<=m;i++){
		mi[i]=0;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int st=1;st<=n;st++){
		for(int i=st;i<=n;i++){
		mi[a[i]]++;
		int tc=mi[a[i]];
		if(tc>1){
			p=i;
			mi[tc]=1;
		}
	}
	
	em();
	
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
		return 0;
}