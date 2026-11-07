#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long len=0;
	for(int i=0;i<n;i++){
		long long a;
		char b[1];
		cin>>a>>b[0];
		for(int j=0;j<a;j++){
			s[len]=b[0];
			len++;
		}
	}
	long long len2=len/2;
	int ans=0;
	for(int i=0;i<len2;i++){
		if(s[i]!=s[len-1]){
			ans++;
		}
		len--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
