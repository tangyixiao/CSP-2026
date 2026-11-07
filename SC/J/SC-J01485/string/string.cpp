#include<bits/stdc++.h>
using namespace std;

const int N=200010,M=1e+7;
char c[N];
long long a[N];
char s[M+10];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	
	for(int i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			sum++;
			s[sum]=c[i];
		}
	}
	
	long long num=0;
	for(long long i=1;i<=sum;i++){
		if(s[i]!=s[sum+1-i]){
			s[i]=s[sum+1-i];
			num++;
		}
	}
	
	cout<<num;

	return 0;
}
