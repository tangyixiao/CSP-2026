#include<bits/stdc++.h>
using namespace std;
string s,d;
long long n,ans,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a;
		string b;
		cin>>a>>b;
		ans+=a;
		for(int j=1;j<=a;j++) s+=b;
	}
	for(long long i=ans-1;i>=0;i--){
		d+=s[i];
	}
	for(long long i=0;i<ans;i++){
		if(s[i]!=d[i]){
			sum++;
			d[i]=s[i];
			s[ans-1-i]=s[i];
		}
	}
	cout<<sum;
	return 0; 
}

