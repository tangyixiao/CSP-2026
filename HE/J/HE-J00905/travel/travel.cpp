#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,q,w;
	cin>>a>>q>>b>>w;
	int abcq=q[2]-'A',abcw=w[2]-'A';
	if(a[0]*10+a[1]!=b[0]*10+b[1]){
		cout<<"0000";
	}
	else{
		cout<<1; 
		if(q[0]*10+q[1]!=w[0]*10+w[1]){
			cout<<"000";
		}
		else{
			cout<<1;
			if(abcq<3&&abcw<3){
				cout<<1;
				if(abs(q[2]-w[2])<2){
					cout<<1;
				}
			}
			else{
				if(abcq>2&&abcw>2){
					cout<<1;
					if(abs(q[2]-w[2])<2){
						cout<<1;
					}
				}
				else{
					cout<<"00";
				}
			}
		}
	}
	
	return 0;
}
