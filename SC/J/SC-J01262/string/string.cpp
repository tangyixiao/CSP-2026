#include<bits/stdc++.h>
using namespace std;
long long n,a[1000010],max1=0;
char c[1000010],s[1000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		max1+=a[i];
	}
	if(max1>=100000000){
		long long max=0;
		for(int i=1;i<=n/2;i++){
			if(c[i]!=c[n+1-i]){
				max+=min(a[i],a[n+1-i]);
			}
		}
		cout<<max;
	return 0;
	}else{
		long long size=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[size]=c[i];
			size++;
		}
	}
	long long max1=0;
	for(int i=0;i<=size/2;i++){
		if(s[i]!=s[size-1-i]){
			max1++;
		}
	}
	cout<<max1;
	return 0;
	}
}