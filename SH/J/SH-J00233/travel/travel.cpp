#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,r1,c2,r2;
	char s1,s2;
	cin>>c1>>r1>>s1;
	cin>>c2>>r2>>s2;
	//cout<<c1<<' '<<r1<<' '<<s1<<endl<<c2<<' '<<r2<<' '<<s2<<endl;
	if(c1 != c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
	}
	if(r1 != r2){
		cout<<"000";
		return 0;
	}else{
		cout<<1;
	}
	if((s1 == 'A' and s2 == 'B') or (s1 == 'B' and s2 == 'A') or (s1 == 'C' and s2 == 'B') or (s1 == 'B' and s2 == 'C') or (s1 == 'D' and s2 == 'F') or (s1 == 'D' and s2 == 'F')){
		cout<<"11";
	}else if((s1 == 'A' and s2 == 'C') or (s1 == 'C' and s2 == 'A')){
		cout<<"10";
	}else{
		cout<<"00";
	}
	return 0;
}
