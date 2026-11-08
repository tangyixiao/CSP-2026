#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int ans;
long long res;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int i=1;i<=a[i];i++){
			s+=c[i];
		} 
	}
	int len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i]) res++;
	}
	cout<<res;
	
	return 0;
}
