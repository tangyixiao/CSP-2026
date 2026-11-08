#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
inline int read(){
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else{cout<<"0000";return 0;}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
		if(s1>s2) swap(s1,s2);
		if(int(s1[2]-'A')<=2&&int(s2[2]-'A')>=3){
			cout<<"00";
		}
		else {
			cout<<"1";
			if(int(s2[2]-s1[2])<=1&&s2[2]!='D') cout<<"1";
			else cout<<"0";
		}
	}
	else {
		cout<<"000";
	} 
	return 0;
} 
