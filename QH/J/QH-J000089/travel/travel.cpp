#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("trval.out","w",stdout);
	int a,b,m,n,x=0;
	char c,d;
	cin>>a>>b>>c>>m>>n>>d;
	if(a==m){
		cout<<1;
	}else{
		cout<<0;
	}if(b==n){
		cout<<1;
	}else{
		cout<<0;
	}
	if((c<=67&&d<=67)||(c>=68&&d>=68)){
		cout<<1;
		x++;
	}else{
		cout<<0;
	}if((x==1&&c-d==1)||(x==1&&d-c==1)){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
