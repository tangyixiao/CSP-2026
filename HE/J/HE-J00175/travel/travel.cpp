#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
int32_t main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
	}else{
		string t1,t2;
		t1=s1[0]+s1[1];
		t2=s2[0]+s2[1];
		if(t1==t2){
			int a=s1[2]-'A'+1;
			int b=s2[2]-'A'+1;
			if((a<=3&&b>3)||(a>3&&b<=3)){
				cout<<"1100";
			}else{
				if(a+1==b||b+1==a){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}
		}else{
			cout<<"1000";
		}
	}
	return 0;
}
