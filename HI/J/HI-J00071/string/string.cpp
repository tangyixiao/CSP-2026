#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],cnt,q[200005],p;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	string b=s;
	reverse(b.begin(),b.end());
	if(b==s){
		cout<<cnt;
		return 0;
	}
	long long j=s.size()-1;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[j]){
			cnt++;
			s[j]=s[i];
		}
		b=s;
		reverse(b.begin(),b.end());
		if(b==s){
			break;
		}
		j--;
	}
	cout<<cnt;
	return 0;
}
