#include<iostream>
using namespace std;
string l="ABC";
bool check1(string x,string y){
	bool flagx=false,flagy=false;
	for(int i=0;i<3;i++){
		if(x[2]==l[i]){
			flagx=true;
		}
		if(y[2]==l[i]){
			flagy=true;
		}
	}
	return flagx==flagy;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	cout<<(a1==a2);
	if(a1!=a2){
		cout<<"000";
	}else{
		if(b1[0]==b2[0]&&b1[1]==b2[1]){
			cout<<1;
			if(check1(b1,b2)){
				cout<<1;
				if(b1[2]==b2[2]+1||b1[2]==b2[2]-1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}
	return 0;
} 