#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=200099;
ll n,a[N];
char ch[N];
string s;
ll cnt,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		cin>>ch[i]; 
		for(int j=1;j<=a[i];++j)
			s+=ch[i];
		cnt+=a[i];
	}
	if(cnt%2==0){
		for(int i=1;i<=cnt/2;++i)
			for(int j=cnt;j>=cnt/2+1;--j)
				if(s[i-1]!=s[j-1]) ans++;
		cout<<ans;
		return 0;
	}
	else{
		for(int i=1;i<=cnt/2;)
			for(int j=cnt;j>=cnt/2+2;--j){
				if(s[i-1]!=s[j-1]) ans++;
				i++;
			}
		if(s[cnt/2]!=s[cnt/2+1]) ans++;
		cout<<ans;
		return 0;
	}
	return 0;
}
