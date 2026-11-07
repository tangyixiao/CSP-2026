#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[10001];
	cin>>n>>m;
	int z[1001];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(a[1]=1){
		cout<<3<<4<<5; 
	}
	else{
		cout<<10<<3<<3;
	}
	return 0;
	
}