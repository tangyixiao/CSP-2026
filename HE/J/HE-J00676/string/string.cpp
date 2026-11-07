#include<bits/stdc++.h>
using namespace std;
int n,a;
long long len,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s="0"+s;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		len+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len+1-i])ans++;
	}
	cout<<ans;
	/*6
    1000000000 a
    1000000000 a
    1000000000 a
    1000000000 b
    1000000000 b
    1000000000 b*/
	return 0;
}
