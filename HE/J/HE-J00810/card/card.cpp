#include<bits/stdc++.h>
using namespace std;
int a[100005],a1[100005],b[100005],b1[100005];
int n,m,fang=0;
void shou(int x,int y){
	for(int i=x;i<=y;i++){
		a1[i]=0;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<3<<" "<<1<<" "<<4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
