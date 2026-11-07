#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
string s1,s2,c1,c2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);   cout.tie(0);
cin>>c1>>s1>>c2>>s2;
if(c1==c2){
	ans+='1';
}else{
cout<<"0000"; return 0;
}
if(s1[0]==s2[0]&&s1[1]==s2[1]){
	ans+='1';
}else{
cout<<"1000"; return 0;
}
if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'){
	ans+='1';
}else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){
	ans+='1';
}else{
	cout<<"1100"; return 0;
}

	if(s1[2]=='A'){
		if(s2[2]=='B'){
			ans+='1';
		}else{
			ans+='0';
		}
	}
	else if(s1[2]=='B'){
		if(s2[2]=='A'||s2[2]=='C'){
			ans+='1';
		}else{
			ans+='0';
		}
	}
	else if(s1[2]=='C'){
		if(s2[2]=='B'){
			ans+='1';
		}else{
			ans+='0';
		}
	}
	else if(s1[2]=='D'){
		if(s2[2]=='F'){
			ans+='1';
		}else{
			ans+='0';
		}
	}
	else if(s1[2]=='F'){
		if(s2[2]=='D'){
			ans+='1';
		}else{
			ans+='0';
		}
	}

cout<<ans;
	return 0;
}
