#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
long long cnt=0;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s[j]=c[i];
	}
	int l=s.size();
	for(int i=1;i<=l;i++)
		if(s[i]!=s[l-i+1]){
			s[i]=s[l-i+1];
			cnt++;
		}
	cout<<cnt;
	return 0;
}