#include<bits/stdc++.h>
#define int long long
using namespace std;
struct people{
	int c,p;
	string z;
}r[10];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r[1].c>>r[1].z>>r[2].c>>r[2].z;
	r[1].p=(r[1].z[0]-'0')*10+(r[1].z[1]-'0');
	r[2].p=(r[2].z[0]-'0')*10+(r[2].z[1]-'0');
	bool flag1=0,flag2=0,flag3=0,flag4=0;
	if(r[1].c==r[2].c){
		flag1=1;
		if(r[1].p==r[2].p){
			flag2=1;
			if((r[1].z[2]<='C'&&r[2].z[2]<='C')||
			(r[1].z[2]>'C'&&r[2].z[2]>'C')){
				flag3=1;
				if(abs(r[1].z[2]-r[2].z[2])==1||(r[1].z[2]=='D'&&
				r[2].z[2]=='F')||(r[1].z[2]=='F'&&r[2].z[2]=='D')){
					flag4=1;
				}
			}
		}
	}
	if(flag1) cout<<1;
	else cout<<0;
	if(flag2) cout<<1;
	else cout<<0;
	if(flag3) cout<<1;
	else cout<<0;
	if(flag4) cout<<1;
	else cout<<0;
	return 0;
}