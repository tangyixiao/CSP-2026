#include<bits/stdc++.h>
using namespace std;
char n[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a=0,m=1,p=0;
	cin>>a;
	for(long long i=1;i<=a;i++){
		int b=0;
		char c;
		cin>>b>>c;
		p=p+b;
		for(long long j=0;j<b;j++){
			n[m]=c;
			m++;
		}
	}
	long long d=m,cnt=0;
	for(long long i=1;i<=m/2;i++){
		d--;
		if(n[i]!=n[d]){
			cnt++;
		}
		
	}
	cout<<cnt;
	return 0;
}


