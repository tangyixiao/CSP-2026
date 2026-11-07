#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int n=0,x=0,y=0,o=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	bool flag=1;
	for(int i=0;i<b.size()-1;i++){
		if(b[i]!=d[i])flag=0;
	}
	if(!flag){
		cout<<0<<0<<0;
		return 0;
	}
	cout<<flag;
	int p=2;
	if(b[p]<='C' && d[p]<='C'){
		cout<<1;
		if(abs(b[p]-d[p])==1)cout<<1;
		else cout<<0;
	}
	else if(b[p]>='D' && d[p]>='D')cout<<1<<1;
	else cout<<0<<0;
	return 0;
} 