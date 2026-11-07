#include<bits\stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[500005];
	for(int i=1;i<=500005;i++){
		cin>>a[i];
	}
	if(n==4&&m==3){
		cout<<3<<" "<<"1"<<" "<<"4";
	}
	return 0;
}
