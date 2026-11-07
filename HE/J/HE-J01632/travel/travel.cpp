#include<bits/stdc++.h>
using namespace std;
string a,c,b,d;
int e;
int main()
{
	freopen("travel.in","i",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c[0]==d[0]&&c[0]==c[0]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c[2]<='c'&&d[2]<='c'){
		cout<<1;
		e=1;
	}else if(c[2]>='d'&&d[2]>='d'){
		cout<<1;
		e=1;
	}else{
		cout<<0;
		e=0;
	}
	if(abs(c[2]-d[2])==1&&e==1){
		cout<<1;
	}else{
		cout<<0;
	}
    return 0;
}
