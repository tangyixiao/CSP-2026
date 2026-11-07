#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char b[200010];
string s;
bool flag=true;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++){
			s+=b[i];
		}
	}
	long long len=s.length()-1,len1=len+1;
	for(long long i=0;i<len1/2;i++){
		if(s[i]!=s[len]){
			len=s.length()-1;
			flag=false;
			break;
		}
		len--;
	}
	if(flag){
		cout<<"0";
		return 0;
	}
	int ans=0;
	
	for(long long i=0;i<len1/2;i++){
		if(s[i]!=s[len]){
			s[len]=s[i];
			ans++;
		}
		len--;
	}
	cout<<ans;
	
	return 0;
}
