#include<bits/stdc++.h>
using namespace std;
string s;
int n,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	 
	cin>>n;
	for(int i=1;i<=n;++i){
		int ai;
		char ci;
		cin>>ai>>ci;
		for(int i=1;i<=ai;++i){
			s+=ci;
		}
	}
	long long len=s.size();
	if(len%2==1){
		for(long long i=0;i<len/2;++i){
			if(s[i]!=s[len-i-1]){
				s[len-i-1]=s[i];
				ans++;
			}
		}
		cout<<ans;
	} 
	else{
		for(long long i=0;i<len/2-1;++i){
			if(s[i]!=s[len-i-1]){
				s[len-i-1]=s[i];
				ans++;
			}
		}
		cout<<ans;
	}
	
	fclose(stdin);fclose(stdout);
	return 0;
}