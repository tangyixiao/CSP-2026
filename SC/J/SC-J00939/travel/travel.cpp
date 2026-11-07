//a是小R排数 b是小X排数
//c3是小R座位号字母 c4是小X的 
#include<bits/stdc++.h>
using namespace std;
int c1,c2,a,b;
char c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>a>>c3>>c2>>b>>c4;
//	cout<<c1<<" "<<a<<" "<<c3<<" "<<c2<<" "<<b<<" "<<c4;
	if(c1==c2){
		cout<<"1";
		if(a==b){
			cout<<"1";
			if((c3>='D'&&c3<='F'&&c4>='D'&&c4<='F')||(c3<='C'&&c3>='A'&&c4<='C'&&c4>='A')){
				cout<<"1";
				if(abs(c3-c4)==1)cout<<"1";
				else cout<<"0";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
			return 0;
		}
		 
	}else{
	  cout<<"0000";
	  return 0;
    }
	return 0;
}