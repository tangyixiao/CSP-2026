#include<bits/stdc++.h>
using namespace std;
const int N=1e5+100;
string t,a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,i;
	cin>>a>>b>>c>>d;
	t+=a+" "+b+" "+c+" "+d;
	if((t[0]==t[7])&&(t[1]==t[8])){
		cout<<1;
		if(t[3]==t[10]&&t[4]==t[11]){
			cout<<1;
			if((t[5]<='C'&&t[12]<='C')){
				cout<<1;
				if(abs(t[5]-t[12])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(t[5]>='D'&&t[12]>='D'){
				cout<<"11";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 