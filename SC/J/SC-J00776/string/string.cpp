#include<bits/stdc++.h>
using namespace std;
long long n,t,t2,t3,cnt;
char a;
char c1[200005],c2[200005]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	t2=1;
	for(long long i=1;i<=n;i++){
		cin>>t>>a;
		t3+=t;
		for(long long j=t2;j<=t3;j++){
			c1[j]=a;
		}
		t2+=t;
	}
	long long f=1;
	for(long long i=t3;i>=1;i--){
		c2[f]=c1[i];
		f++;
	}
	for(long long i=1;i<=t3/2;i++){
		if(c1[i]!=c2[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}