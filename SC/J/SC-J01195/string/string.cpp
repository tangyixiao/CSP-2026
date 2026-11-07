#include<bits/stdc++.h>
using namespace std;
string s;
long long n,r,a[200005];
char c[200005];
long long ddd(string s){
	long long ans;
	bool f=1;
	for(long long i=1,j=s.size();;i++,j--){
	   if(i>j){
	   	break;
	   }
	   if(s[i]!=s[j]){
	   	f=0;
	   	ans++;
	   }
	}
	if(f==0){
		return ans;	
	}else{
		return 0;
	}
}
int main(){ 
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	} 
	cout<<ddd(s);
	return 0;
}