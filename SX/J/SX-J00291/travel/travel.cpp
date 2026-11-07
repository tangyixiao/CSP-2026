#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '/n'
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	int f=1,f1=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<0;
		f=0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&f)cout<<1;
	else{
		cout<<0;
		f=0;
	}
	if(s1[2]<='C'&&s2[2]<'C'&&f)cout<<1;
	else if(s1[2]>='D'&&s2[2]>='D'){
		cout<<1;
		f1=1; 
	}
	else{
		cout<<0;
		f=0;
	}
	if((s1[2]+1==s2[2]||s1[2]-1==s2[2]||f1)&&f)cout<<1;
	else cout<<0;
	return 0;
}
