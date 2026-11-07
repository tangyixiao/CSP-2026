#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,ss,l,ll;
	bool flag=true;
	cin >> s;
	cin >> ss;
	cin >> l >> ll;
	if(s==l){
		cout << 1;
	}else{
		cout << 0;
		flag=false;
	}
	if(ss[0]==ll[0] && ss[1]==ll[1] && flag){
		cout << 1;
	}else{ 
		cout << 0;
		flag=false;
	}
	if(flag && ((ss[2]>='D' && ll[2]>='D') || (ss[2]<'D' && ll[2]<'D'))){
		cout << 1;
	}else{
		cout << 0;
		flag=false;
	}
	if(flag && abs(ss[2]-ll[2])==1){
		cout << 1;
	}else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
