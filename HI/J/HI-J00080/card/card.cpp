#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+10;
const int M=3*1e5+10;
int n,m;
int a[N];
bool p3=1;
bool p2[M];
int b[N]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int ai;
		cin>>ai;
		a[i]=ai;
		if(p2[ai]==1){
			p3=0;
		}
		else p2[ai]=1;
	}
	if(n==m&&p3==1){
		for(int i=1;i<=n;i++){
			b[a[i]]=i;
		}
		for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
	}
	return 0;
} 
