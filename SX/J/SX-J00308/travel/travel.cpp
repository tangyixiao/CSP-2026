#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int f1,f2,f3,f4;
	if(a==c){
		f1=1;
		if(b.substr(0,2)==d.substr(0,2)){
			f2=1;
			string s="";
			s+=b[2];
			s+=d[2];
			if(s=="AB"||s=="BA")f3=f4=1;
			else if(s=="BC"||s=="CB")f3=f4=1;
			else if(s=="DF"||s=="FD")f3=f4=1;
			else if(s=="AC"||s=="CA"){
				f3=1;
				f4=0;
			}
			else f3=f4=0;
		}
		else f2=f3=f4=0;
	}
	else f1=f2=f3=f4=0;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}