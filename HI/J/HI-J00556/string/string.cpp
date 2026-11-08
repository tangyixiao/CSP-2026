#include<bits/stdc++.h> 
using namespace std;
const int N=2e6+9;
long long n,m=1,sum=0,cnt;
char a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long k;
		cin>>k;
		string op;
		cin>>op;
		for(long long i=m;i<m+k;i++){
			a[i]=op[0];
		}
		m+=k;
		sum+=k;
	}
	if(sum%2!=0){
		cnt=(sum+1)/2;
	}else{
		cnt=sum/2;
	}
	long long kk=cnt;
	for(long long i=1;i<=cnt;i++){
		if(a[i]==a[sum-i+1]) {
			kk-=1;
		}
	}
	cout<<kk;
	return 0;
}
