#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int t1=(a[0]-'0')*10+a[1]-'0';
	int t2=(b[0]-'0')*10+b[1]-'0';
	int t3=(c[0]-'0')*10+c[1]-'0';
	int t4=(d[0]-'0')*10+d[1]-'0';
	if(t1!=t3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(t2!=t4){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(b[2]=='C' and d[2]=='D'){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs((int)(b[2]-d[2]))==1) cout<<1;
	else cout<<0;
	return 0;
}