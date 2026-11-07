#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	bool flag1=0,flag2=0,flag3=0;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
		flag1=1;
	}
	else cout<<0;
	if(b[0]==d[0]&&b[1]==d[1]&&flag1==1){
		cout<<1;
		flag2=1;
	}
	else cout<<0;
	if(flag2==1&&((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D'))){
		cout<<1;
		flag3=1;
	}
	else cout<<0;
	if(flag3==1&&(b[2]+1==d[2]||d[2]+1==b[2])) cout<<1;
	else cout<<0;
	return 0;
}