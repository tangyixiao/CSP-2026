#include <bits/stdc++.h>
using namespace std;
int toint(string s){
	return (s[0]-'0')*10+s[1]-'0';
}
void solve(){
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int t1=toint(c1),t2=toint(s1),t3=toint(c2),t4=toint(s2);
	char ct1=s1[2],ct2=s2[2];
//	cout<<t1<<" "<<t2<<'\n';
//	cout<<c1<<" "<<c2<<'\n';
	if (ct1>ct2) swap(ct1,ct2);
	if (t1!=t3){
		cout<<"0000\n";
	}else if (t2!=t4){
		cout<<"1000\n";
	}else if (!((ct1<='C' && ct2<='C') || (ct1>'C' && ct2>'C'))){
		cout<<"1100\n";
	}else if (ct1+1==ct2 || (ct1=='D' && ct2=='F')){
		cout<<"1111\n";
	}else{
		cout<<"1110\n";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//	cin >> T;
	for (int _=0;_<T;++_) solve();
	cout.flush();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//8:45