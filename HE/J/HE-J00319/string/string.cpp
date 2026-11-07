#include<bits/stdc++.h>
using namespace std;
const long long N=1e9+5;
char z[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,sum=0,l=0;
	cin>>n;
	char s;
	for(int i=0;i<n;i++){
		cin>>a>>s;
		for(long long j=l;j<l+a;j++){
			z[i]=s;
		}
		l+=a;
	}if(l%2!=0){
		long long m=l%2+1;
		for(long long i=m;i<l;i++){
			if(z[i-1]!=z[i+1]){
				sum++;
			}
		}
	}
	else{
		for(long long i=0;i<l;i++){
			if(z[i]!=z[l-i]){
				sum++;
			}
		}
	}cout<<sum;
	return 0;
} 
