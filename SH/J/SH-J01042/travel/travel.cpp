#include<bits/stdc++.h>
using namespace std;
#define fre(x) freopen(#x".in","r",stdin);freopen(#x".out","w",stdout)
string a,b,c,d;
string s="ABCDE";
signed main(){
	fre(travel1);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			int t1=(b[2]-'A'),t2=(d[2]-'A');
			if((t1<=2)==(t2<=2)){
				cout<<1;
				if(abs(t1-t2)==1){
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
	}else{
		cout<<"0000";
	}
	
	return 0;
}
