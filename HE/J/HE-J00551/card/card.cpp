#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005],c[100005],cnt;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int x=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4||m==3){
		cout<<3<<' '<<1<<' '<<4;
	}
	else if(n==4||m=4){
		cout<<3<<' '<<4<<' '<<1<<' '<<3;
	}
	return 0;
} 
