#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[200001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,t=0,tt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1]&&a[i]!=1){
			cout<<t+tt<<" ";
			tt++;
		}else{
			t++;
		}
	}
	return 0;
} 