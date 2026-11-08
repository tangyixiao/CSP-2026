#include<bits/stdc++.h>
using namespace std;
struct{
	int id,d,c,d;
}a[100005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].c;
	}
	for(int i=1;i<=n;i++){
		a[i].d=a[i].c;
		
	}	
		
		
		
		
		
		
	for(int i=1;i<=m;i++){
		cout<<a[i].d<<' ';
	}
	return 0;
}
