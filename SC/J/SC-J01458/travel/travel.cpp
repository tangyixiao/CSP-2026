#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1>>s1>>c2>>s2;
	if(c1==c2){
		cout <<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
		}
		else{
			cout <<0;
		}
		
		int v1,v2;
		if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
			v1=1;
		}
		else{
			v1=2;
		}
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			v2=1;
		}
		else{
			v2=2;
		}
		
		if(v1==v2&&(s1[0]==s2[0]&&s1[1]==s2[1])){
			cout<<1;
		}
		else{
			cout<<0;
		}
		
		if(abs(s2[2]-s1[2])==1&&v1==v2&&(s1[0]==s2[0]&&s1[1]==s2[1])){
			cout<<1;
		}
		else{
			cout << 0;
		}
	}
	else{
		cout <<"000";
	}
	return 0;
}