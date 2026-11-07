#include<bits/stdc++.h>
using namespace std;
char a,b,a2,b2,Y1,Y2;
int x1,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b;
	cin>>x1;
	cin>>Y1;
	cin>>a2>>b2;
	cin>>x2;
	cin>>Y2;
	if(Y1=='D') Y1='Y';
	if(Y2=='D') Y2='Y';
	if(Y1=='F') Y1='Z';
	if(Y2=='F') Y2='Z';
	if(a!=a2 || b!=b2){
		cout<<"0000"<<endl;
	}
	else{
		cout<<"1";
		if(x1!=x2) cout<<"000"<<endl;
		else{
			cout<<"1";
			int aa=Y1-'A';
			int bb=Y2-'A';
			if(max(aa,bb)-min(aa,bb)>2) cout<<"00"<<endl;
			else{
				cout<<"1";
				if(max(aa,bb)-min(aa,bb)!=1) cout<<"0"<<endl;
				else cout<<"1"<<endl;
			}
		}
	}
	return 0;
}
