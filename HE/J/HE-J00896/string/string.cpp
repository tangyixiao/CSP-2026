#include<bits/stdc++.h>
using namespace std;

string str="+";

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	scanf("%lld",&n);
	long long cnt=0;
	for(int i=1;i<=n;i++){
		long long x;
		scanf("%lld",&x);
		string str1;
		cin>>str1;
		for(int j=1;j<=x;j++){
			str+=str1;
		}
	}
	str.erase(0,1);
	for(long long i=0;i<=(str.size()-1)/2;i++){
		if(str[i]!=str[str.size()-1-i]){
			cnt++;
		}
	}
	printf("%lld",cnt);
	
	return 0;
}
