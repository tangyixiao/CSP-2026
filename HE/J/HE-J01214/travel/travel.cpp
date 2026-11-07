#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	bool f=false;
	int paia=(b[0]-'0'*10)+(b[1]-'0');
	int paib=(d[0]-'0'*10)+(d[1]-'0');
	char cea=b[2];
	char ceb=d[2];
	if(paia==paib){
		cout<<"1";
		if(cea<='C'&&ceb<='C'){
			cout<<"1";
			f=true;
		}else if(cea>='D'&&ceb>='D'){
			cout<<"1";
			f=true;
		}else if(cea<='C'&&ceb>='D'){
			cout<<"0";
		}else if(cea>='D'&&ceb<='C'){
			cout<<"0";
		}
	}else{
		cout<<"00";
	}
	int x=cea-'A';
	int y=ceb-'A';
	if(f){
		if(x-y==1||y-x==1){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}
