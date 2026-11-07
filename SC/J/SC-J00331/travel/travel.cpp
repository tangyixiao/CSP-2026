#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1;
string c2,s2;
string ans;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";return 0;
	}
	string t1,t2;
	for(int i=0;i<2;i++){
		t1+=s1[i];t2+=s2[i]; 
	}
	if(t1!=t2){
		cout<<"1000";return 0;
	}
	char xx=s1[2],yy=s2[2];
	if((xx<='C'&&yy<='C')||(xx>='D'&&yy>='D')){
		if((xx==yy+1)||(yy==xx+1)){
			cout<<"1111";return 0;
		}
		else{
			cout<<"1110";return 0;
		}
	}
	else{
		cout<<"1100";return 0;
	}
	return 0;
}