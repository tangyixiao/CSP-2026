#include <iostream>

#include <string>
#include <cstring>

using namespace std;
int c1,c3,p1,p2;
string c2,c4;
bool e1,e2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	p1=(c2[0]-'0')*10+(c2[1]-'0'),p2=(c4[0]-'0')*10+(c4[1]-'0');
	if(c2[2]=='D'||c2[2]=='F'){
		e1=1;//1 shang
	}
	if(c4[2]=='D'||c4[2]=='F'){
		e2=1;
	}
	if(c1==c3){
		cout<<1;
		if(p1==p2){
			cout<<1;
			if(e1==e2){
				cout<<1;
				if(c2[2]=='A'&&c4[2]=='B'||c2[2]=='B'&&c4[2]=='A'||c2[2]=='C'&&c4[2]=='B'||c2[2]=='B'&&c4[2]=='C'||c2[2]=='D'&&c4[2]=='E'||c2[2]=='E'&&c4[2]=='D'){
					cout<<1<<endl;
				}else cout<<0<<endl;
			}else{
				cout<<"00"<<endl;
			}
		}else{
			cout<<"000"<<endl;
		}
	}else{
		cout<<"0000"<<endl;
	}
	return 0;
}