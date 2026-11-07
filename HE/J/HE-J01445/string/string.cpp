#include <bits/stdc++.h>
using namespace std;
const long long N=1e9+10;
long long a[N];
char str[N],s[N],b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,cnt=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
		for(long long j=1;j<=a[i];j++){
			s[j]=b[i];
		}
	}
	for(long long  i=1;i<=n;i++){
		str[i]=s[i];
	}
	for(long long i=1;i<=sum;i++){
		for(long long j=sum;j>=1;j++){
			if(str[i]==str[j]){
				cnt++;
			}
		}
	}
	if(sum%2==0&&cnt==0){
		cout<<sum/2;
	}
	else if(sum%2==0&&cnt!=0){
		cout<<sum/2-cnt;
	}
	else if(sum%2!=0){
		cout<<(sum-cnt)/2;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
