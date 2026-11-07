#include <bits/stdc++.h>
using namespace std;



int Ri,Xi;
string Rs,Xs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>Ri>>Rs>>Xi>>Xs;
	if(Ri==Xi){
		cout<<1;
		string R=""+Rs[0]+Rs[1];
		string X=""+Xs[0]+Xs[1];
		if(R==X){
			cout<<1;
			char r=Rs[2],x=Xs[2];
			if(r>='D'&&x>='D'){
				cout<<"11";
			} else if(r<='C'&&x<='C'){
				cout<<1;
				if(r=='B'||x=='B'){
					cout<<1;
				} else {
					cout<<0;
				}
			} else {
				cout<<"00";
			}
		} else {
			cout<<"000";
		}
	} else {
		cout<<"0000";
	}
	cout<<endl;
	return 0;
} 
