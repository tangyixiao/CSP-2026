#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0;
	cin>>n;
	for(long long i=0;i<n;i++){
		long long num;
		char str;
		cin>>num>>str;
		sum+=num;
		while(num){
			a+=str;
			num--;
		}
	}
	b=a;
	reverse(b.begin(),b.end());
	long long cnt=0;
	for(long long i=0;i<sum/2;i++){
		if(a[i]!=b[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0; 
}
