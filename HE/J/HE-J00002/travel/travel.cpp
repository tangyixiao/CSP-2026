#include<bits/stdc++.h>
using namespace std;
bool a,b;
string c,s,cc,ss;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> c >> s >> cc >> ss;
	bool o=(c==cc);
	bool op=(o&&s[0]==ss[0]&&s[1]==ss[1]);
	if(s[2]>='A'&&s[2]<='C')a=1;
	if(ss[2]>='A'&&ss[2]<='C')b=1;
	bool kl=(op&&a==b);
	int aa=(int)s[2]-64,bb=(int)ss[2]-64;
	int kll=(kl&&abs(aa-bb)==1);
	cout << o << op << kl << kll;
	return 0;
}

