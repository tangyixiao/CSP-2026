#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
long long num,a[N],f[N];
bool b[N];
void work(int step,int s){
	if(s==m){
		for(int i=1;i<=m;i++){
			cout<<f[i]<<" ";
		}cout<<endl;
		return ;
	}
	for(int i=step;i<=n;i++){
		if(b[i]!=1){
			f[step]=a[i];
			work(i+1,s+1);
			b[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	work(1,0);
}
/*
1 


*/
