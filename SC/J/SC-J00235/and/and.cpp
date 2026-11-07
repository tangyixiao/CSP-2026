#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m,aa;
long long nm[N];
long long tw[35];
bool qu1[32]={0},qu2[32]={0};
long long ad(long long A,long long B){
	long long ans=0;
	for(int i=30;i>0;i--){
		if(A>=tw[i]){
			A-=tw[i];
			qu1[i]=1;
		}
		if(B>=tw[i]){
			B-=tw[i];
			qu2[i]=1;
		}
	}
	for(int i=1;i<=30;i++){
		if(qu1[i]==1&&qu2[i]==1){
			ans+=tw[i];
		}
	}
	return ans;
}
int main(){	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	tw[1]=1;
	for(int i=2;i<=32;i++) tw[i]=tw[i-1]*2;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>nm[i];
	}
	sort(nm+1,nm+1+n);
	for(int i=n;m>1;m--){
		int ha=ad(nm[i],nm[i-1]);
		if(ha==0){
			m++;
			i--;
			continue;
		}
		i-=1;
		nm[i]=ha;
		aa=i;
		memset(qu1,0,sizeof(qu1));
		memset(qu2,0,sizeof(qu2));
	}
		cout<<nm[aa]<<endl;
	return 0;
	
}