#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,b,c=0,len,t=0;
	string a;
	char d;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>b>>d;
		for(long long j=0;j<b;j++){
			a[j+c]=d;
		}
		c+=b;
	}
	if(c%2==0){
		len=c/2;
		for(long long i=0;i<len;i++){
			if(a[i]!=a[c-i-1]){
				t++;
			}else{
				continue;
			}
		}
	}
	else if(c%2==1){
		len=c/2;
		for(long long i=0;i<len;i++){
			if(a[i]!=a[c-1-i]){
				t++;
			}else{
				continue;
			}
		}
	}
	cout<<t;
	fclose(stdin); fclose(stdout);
	return 0;
}
