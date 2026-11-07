#include<bits/stdc++.h>
using namespace std;
long long z,n,ans;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d", &n);
	while(n--){
		string st;
		scanf("%lld", &z);
		cin>>st;
		for(long long i=1;i<=z;++i){
			s+=st;
		}
	}
	long long a=s.size();
	long long l=0,r=a-1;
	for(long long i=0;i<a/2;++i){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;r--;
	}
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}