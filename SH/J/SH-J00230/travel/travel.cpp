#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;//表示小 R 的车票上的车厢号、座位号，以及小 X 的车票上的车厢号、座位号。
	if(a==c){
		cout<<'1';
		int x,y;//表示第几行
		x=(b[0]-'0')*10+(b[1]-'0');
		y=(d[0]-'0')*10+(d[1]-'0');
		if(x==y){
			cout<<'1';
			char e,f;
			e=b[2];
			f=d[2];
			if(e>f)swap(e,f);
			if(e>='D'&&f>='D'){
				cout<<"1";
				if(e=='D'&&f=='F')cout<<"1";
				else cout<<"0";
			}else if(e<'D'&&f<'D'){
				cout<<"1";
				if(e=='A'&&f=='B')cout<<"1";
				else if(e=='B'&&f=='C')cout<<"1";
				else cout<<"0";
			}else{
				cout<<"00";
			}
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
