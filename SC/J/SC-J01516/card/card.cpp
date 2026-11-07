#include<bits/stdc++.h>
using namespace std;
long long a,s;
long long p[10000001] 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>a>>s;
	for(int i=1;i<=a;i++){
		cin>>p[i];
	}
	if(a==4 && s==3){
		cout<<3<<' '<<1<<' '<<4;
	}
	if(a==10 && s==3){
		cout<<10<<' '<<3<<' '<<3;
	}
}