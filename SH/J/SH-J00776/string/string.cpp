#include<bits/stdc++.h>
using namespace std;
int a[200010];
string s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1,s2;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>s[i];
	}
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=a[i];j++){
    		s1+=s[i];
		}
	}
	long long ans=0;

	for(long long i=0,t=s1.size()-1;i<s1.size();i++,t--){
		if(s1[t]!=s1[i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}
