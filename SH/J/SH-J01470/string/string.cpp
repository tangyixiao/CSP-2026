#include<bits/stdc++.h>
using namespace std;
long long n,ans,a;
string s;
char b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>b;
		while(a--){
			s+=b;
		}
	}
	long long k=s.size();
	if(s.size()%2!=0) k++;
	for(long long i=0;i<k/2;i++){
		if(s[i]!=s[s.size()-i-1]) ans++; 
	}
	cout<<ans;
	return 0;
}
