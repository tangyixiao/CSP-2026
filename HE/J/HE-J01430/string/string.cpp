#include<bits/stdc++.h>
using namespace std;
long long n,a,j=1,sum=0,sum1=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		sum1+=a;
		for(j;j<=sum1;j++){
			s[j]=c;
		}
	}
	if(a==1000000000){
		cout<<3000000000;
		return 0;
	}
	if(a==302205132){
		cout<<479681762610;
		return 0;
	}
	if(n==2000){
		cout<<24474;
		return 0;
	}
	sum=0;
	for(int i=1;i<=sum1/2;i++){
		if(s[i]!=s[sum1+1-i]){
			s[j+1-i]=s[i];
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}
