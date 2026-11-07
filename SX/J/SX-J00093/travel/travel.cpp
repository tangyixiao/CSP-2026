#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string an,bn;
	cin>>a>>an>>b>>bn;
	if(a==b){
		cout<<1;
		if(an[0]==bn[0]&&an[1]==bn[1]){
			cout<<1;
			if(an[2]<='C'){
				if(bn[2]<='C'){
					if(an[2]!='B'&&bn[2]!='B')
					{
						cout<<"10";
					}else{
						cout<<"11";
					}
				}else{
					cout<<"00";
				}
			}else{
				if(bn[2]<='C'){
					cout<<"00";
				}else{
					cout<<"11";
				}
			}
		}else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
}
