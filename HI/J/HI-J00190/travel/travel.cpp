#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;	
	if(a!=c){
		cout<<"0000";
	}
	else{
		int rw=(b[0]+b[1])-'0';
		int xw=(d[0]+d[1])-'0';
		if(rw!=xw){
			cout<<"1000";
		}
		else{
			rw=(b[2]-'A')/3;
			xw=(d[2]-'A')/3;
			if(rw!=xw){
				cout<<"1100";
			}
			else{
				rw=b[2]-'A';
				xw=d[2]-'A';
				if(rw>xw){
					swap(rw,xw);
				}
				if((rw==3&&xw==5)||rw+1==xw){
					cout<<"1111";
				}
				else cout<<"1110";
			}
		}
	}
	return 0;
}
