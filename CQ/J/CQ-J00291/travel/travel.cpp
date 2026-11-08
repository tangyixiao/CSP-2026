#include<bits/stdc++.h>
#define int long long
using namespace std;
bool f1=0,f2=0,f3=0,f4=0;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>s1>>c1>>s2>>c2;
	if(s1==s2){
		f1=1;
		if(c1[0]==c2[0]&&c1[1]==c2[1]){
			f2=1;
			if((c1[2]>='D'&&c1[2]<='F'&&c2[2]>='D'&&c2[2]<='F')||(c1[2]>='A'&&c1[2]<='C'&&c2[2]>='A'&&c2[2]<='C')){
				f3=1;
				if(abs(c1[2]-c2[2])==1) f4=1;
			}
		}
	}
	if(f4==1) cout<<1111;
	else if(f3==1) cout<<1110;
	else if(f2==1) cout<<1100;
	else if(f1==1) cout<<1000;
	else cout<<"0000";
	return 0;
}

