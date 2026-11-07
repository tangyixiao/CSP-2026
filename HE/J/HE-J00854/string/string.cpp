#include <bits/stdc++.h>
using namespace std;
long long a,d,s[1000002];
string ss[1000001];
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin>>a;
	for (int i=0;i<a;i++){
		cin>>s[i]>>ss[i];
		d+=s[i];
	}
	cout<<d/2;
	return 0;
}

