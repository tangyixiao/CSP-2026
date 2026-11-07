#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a=0,ans=0,cnt=0;
	string c,s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
		ans+=a;
	}
	long long p=(s.size()+2-1)/2;
	for(long long i=0;i<p;i++){
		if(s[i]==s[ans-i-1]){
			continue;
		}else{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 
