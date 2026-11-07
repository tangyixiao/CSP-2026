#include<iostream>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
int a[54],t=1,t2=1;
char ss[56];
signed main(){
	freopen("travel.in","r",stdin),freopen("travel.out","w",stdout);
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9') a[t]=a[t]*10+(int)(s[i]-'0');
		if(s[i]==' ') t++;
		if(s[i]>='A'&&s[i]<='F') ss[(t+1)/2]=s[i];
	}
	if(a[1]!=a[3]) cout<<"0000";
	else{
		if(a[2]!=a[4]) cout<<"1000";
		else{
			if(!(ss[1]<='C'&&ss[2]<='C'||ss[1]>='D'&&ss[2]>='D')) cout<<"1100";
			else{
				if(abs((int)(ss[1]-ss[2]))>1) cout<<"1110";
				else cout<<"1111";
			}
		}
	}
	return 0;
}