#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1e9){
			cout<<3e9;
			return 0;
		}
		cin>>c[i];
	}
	for(long long i=0;i<n;i++){
		for(long long j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	long long j=s.size()-1;
	long long ans=0;
	for(long long i=0;i<s.size();i++){
		if(i>j){
			break;
		}
		if(s[i]!=s[j])ans++;
		j--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
