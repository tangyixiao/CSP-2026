#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stduot)
	int a,b;
	int m,n,i,j;
	char x,y;
	cin>>a>>m>>x>>b>>n>>y;
	i=m++;
	j=m--;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	if(a==b){
		cout<<1;
		if(m==n)
			cout<<1;
		else if(m!=n){
		
			cout<<"000";
			return 0;
		}
		if((x>='A'||x<='C')&&(y=='E'||y=='D')||(y>='A'||y<='C')&&(x=='E'||x=='D')){
			cout<<0;
			cout<<0;
			return 0;
		}
		else cout<<1;
		if((i++==n||m--==n)&&x==y)
			cout<<1;
		else if((x++==y||x--==y)&&n==m)
			cout<<1;
		else cout<<0;
	}
	return 0;
}
