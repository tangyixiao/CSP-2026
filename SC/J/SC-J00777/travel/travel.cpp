#include<bits/stdc++.h>
using namespace std;
string a,b;
string c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a>>c;
	cin>>b>>d;
	if(c==d){
		cout<<"0000";
		return 0;
	}
	if(a==b){
		cout<<1;
	}else cout<<0;
	if(c[0]==d[0]&&c[1]==d[1]){
		cout<<1;
	}else cout<<0;
	if(c[0]==d[0]&&c[1]==d[1]&&((c[2]>='A'&&c[2]<='C')&&(d[2]>='A'&&d[2]<='C')||(c[2]>='D'&&c[2]<='F')&&(d[2]>='D'&&d[2]<='F'))){
		cout<<1;
	}else cout<<0;
	int s1=(c[0]-'0')*10+(c[1]-'0');
	int s2=(d[0]-'0')*10+(d[1]-'0');
		int x=max((int)c[2],(int)d[2]);
		if(x=='D'){
			cout<<0;
			return 0;
		}
		if(abs(s1-s2)>1||abs((int)c[2]-(int)d[2])>1||abs(s1-s2)==abs((int)c[2]-(int)d[2])){
			cout<<0;
			return 0;
		}
	cout<<1;
	return 0;
}