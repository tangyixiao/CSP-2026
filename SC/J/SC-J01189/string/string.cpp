#include <bits/stdc++.h>
using namespace std;
string s;
long long n,m,a[20010],cnt=0;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c;
		m+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=c;
		}
	}
	for(int i=0;i<=(m-1)/2;i++){
		if(s[i]!=s[m-1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}