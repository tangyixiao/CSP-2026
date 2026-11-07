#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
int a[N];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	a[65]=a[66]=a[67]=1,a[68]=a[70]=2;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			cout<<"1";int p=s1[2],q=s2[2];
			if(a[p]==a[q]){
				cout<<"1";
				if((abs(p-q)==1 and min(p,q)!=67) or (min(p,q)==68 and max(p,q)==70))cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}