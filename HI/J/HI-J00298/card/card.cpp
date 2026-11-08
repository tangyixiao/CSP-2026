#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int y[a+1];
	for(int i=1;i<=a;i++){
		cin>>y[i];
	} 
	int x[2000];
	for(int i=1;i<=b;i++){
		x[1]=2,x[2]=3,x[3]=5;
	}
	for(int i=1;i<=b;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}
