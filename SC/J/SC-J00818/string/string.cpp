#include<bits/stdc++.h>
using namespace std;
int n;
const int N=200005;
long long a[N],sum=0,ans=0;
string s1[N],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i]; cin>>s1[i];
	}
    for(int i=0;i<n;++i){
    	for(int j=1;j<=a[i];++j){
    		s=s+s1[i];
		}
	}
	int mid=s.size()/2;
	for(int i=0;i<s.size();++i){
		if(i<=mid)
		if(s[i]!=s[s.size()-i-1]) ans++;
	}
	cout<<ans;
	
	return 0;
}