#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+7891;
ll ans=0;
int n,a,l=0;
char c;
string s=""; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		l+=a;
		while(a--){
			s=s+c;
		}
	}
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1])ans++;
	}
	cout<<ans;
	return 0;
}
