#include<bits/stdc++.h>
using namespace std;
long long a,n,ans,b[100005],d[100000];
string s,s1,s2,c;

int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>a>>c;
		b[]
	}
	long long len=s.size();
	if(len%2==1){
		for(int i=len-1;i>=len/2+1;i--){
			s2+=s[i];
		}
		for(int i=0;i<len/2;i++){
			s1+=s[i];
		}
		if(s1==s2){
			cout<<ans;
			return 0;
		}
		else{
			for(int i=0;i<len/2;i++){
				if(s1[i]!=s2[i]){
					ans++;
				}
			}
		}
	}
	else{
		for(int i=len-1;i>=len/2;i--){
			s2=s2+s[i];
		}
		for(int i=0;i<len/2-1;i++){
			s1=s1+s[i];
		}
		if(s1==s2){
			cout<<ans;
			return 0;
		}
		else{
			for(int i=0;i<len/2;i++){
				if(s1[i]!=s2[i]){
					ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
	cout<<s;
	return 0;
}