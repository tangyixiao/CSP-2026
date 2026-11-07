#include<bits/stdc++.h>
using namespace std;
int n;
long long a,cnt,sum;
char c[200005];
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a>>c[i];
		for(int j=0;j<a;j++) {
			s=s+c[i];
		}
	}
	long long l=0,r=s.length()-1;
	while(l<=r) {
		if(s[l]==s[r]) {
			l++;
			r--;
		}
		else{
			cnt++;
			l++;
			r--;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
