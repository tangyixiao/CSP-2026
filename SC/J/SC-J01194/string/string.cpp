#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	} 
	long long l=s.size(),cnt=0;
	int flag=1;
	for(long long i=0;i<l;i++){
		if(s[i]!=s[l-1-i]){
			flag=0;
			s[l-1-i]=s[i];
			cnt++;
		}
	}
	if(flag==1){
		cout << "0";
		return 0;
	}else{
		cout << cnt;
	}
	return 0;
} 