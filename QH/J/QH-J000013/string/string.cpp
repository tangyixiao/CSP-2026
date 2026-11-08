#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,num=0,count=0;
	cin>>n;
	long long a[n+1];
	char c[n+1];
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long s[250010];
	for(long long i=1;i<=n;i++){
		while(a[i]>0){
			s[num] = c[i];
			num++;
			a[i]--;
		}
	}
	for(long long i=0;i<=(num-1)/2;i++){
		if(s[i] != s[num-i-1]) count++;
	}
	cout<<count;
	return 0;
}
