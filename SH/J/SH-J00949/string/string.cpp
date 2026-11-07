#include<bits/stdc++.h>
using namespace std;

long long n,a[200005],ans1,ans;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		string sl;
		long long sum=a[i];
		while(sum--){
			sl+=c[i]; 
		}
		s+=sl;
	}
	long long l=s.size();
	for(int i=0;i<=l;i++){
		if(s[i]!=s[l-i-1]){
			ans++;
		}
	}
	cout<<ans/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
//陈老师保佑我考>=2 
