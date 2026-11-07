#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[20000005];
char c[20000005];
string s;
long long j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	bool f=0;
	for(long long i=0;i<s.size();i++){
		for(long long j=s.size()-1;j>=0;j--){
			if(s[i]!=s[j]) f=1;
		}
	}
	if(f==0){
		cout<<"0";
		return 0;
	}
	long long ans=0;
	long long t=s.size();
	string e;
	for(int i=s.size()-1;i>=0;i--) e+=s[i];
	long long sl=t/2;
	if(t%2==1){
		for(long long i=0;i<=sl;i++){
			if(s[i]!=e[i]) ans++;
		}
        cout<<ans;
        return 0;
	}else{
		long long sum=0;
		for(long long i=0;i<sl;i++){
			if(s[i]!=e[i]) sum++;
		}
		cout<<sum;
		return 0;
	}
	return 0;
}

