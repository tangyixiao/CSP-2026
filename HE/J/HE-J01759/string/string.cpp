#include<bits/stdc++.h>
using namespace std;
char c[200005];
long long a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long l=0;
	string s="";
	for(int i=1;i<=n;i++){
		cin>>a[i] >>c[i] ;
		l+=a[i];
		for(int j=0;j<a[i];j++){
			s=s+c[i];
		}
		
	}
	long long cnt=0;
	for(int i=0;i<=(l-1)/2;i++){
		if(s[i]!=s[l-1-i]){
			cnt++;
		}
	}
	
	cout<<cnt;
	
	return 0;
}
