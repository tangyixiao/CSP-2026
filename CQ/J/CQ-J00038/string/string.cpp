#include<bits/stdc++.h> 
using namespace std;
unsigned long long n,a,k,ans;
char b;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(unsigned long long i=1;i<=n;i++){
		cin>>a>>b;
		while(a--){
			k++;
			s[k]=b;
		}
	}
	for(unsigned long long i=1;i<=k/2;i++)
		if(s[i]!=s[k-i+1])
			ans++;
	cout<<ans;
	return 0;
}
