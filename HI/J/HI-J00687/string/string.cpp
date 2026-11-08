#include <bits/stdc++.h>
using namespace std;
int n,a[50000005];
long long sum,len,tj;
char c[50000005];
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		for (int j=1;j<=a[i];j++) s+=c[i];
	}
	len=(sum+1)/2;
	for (int i=0;i<len;i++){
		if (s[i]!=s[s.size()-1-i]) tj++;
	}
	cout<<tj;
	return 0;
}
