#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long n,a,t=0,cnt=0,sum=0;
	char c;
	string s;
	cin>>n;
	while(n--){
		cin>>a>>c;
		sum+=a;
		while(a--){
			s[t]=c;
			t++;
		}
	}
	for(long long i=0;i<sum/2;i++){
		if(s[i]==s[sum-1-i]) continue;
		else cnt++;
	}
	cout<<cnt;
	freopen("string.in","t",stdin);
	freopen("string.out","w",stdout);
	return 0;
}
