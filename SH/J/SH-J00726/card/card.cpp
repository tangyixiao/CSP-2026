#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int x[500086];
	for(int i=1;i<=a;i++){
		cin>>x[i];
	} 
	if(a>b+1) {
		cout<<a<<" "<<x[1]<<" "<<b;
	}else{
		cout<<b<<" "<<x[1]<<" "<<a;
	}
} 
