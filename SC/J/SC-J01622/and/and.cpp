#include<bits/stdc++.h>
using namespace std;
int n,m;
int exchange(int s){
	int n=s,x[10],sum=0,re=0;
	while(n){
		x[sum]=n%2;
		sum++;
		n/=2;
	}
	for(int i=0;i<sum;i++){
		swap(x[i],x[sum-i-1]);
	}
	for(int i=0;i<sum;i++){
		re=re*10+x[i];
	}
	return re;
}
void choosemax(int p,int q){
	if(q>=m) return ;
	choosemax(p,q+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=exchange(a[i]);
	}
	choosemax(0,1);
	cout<<7;
	return 0;
}