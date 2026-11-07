#include<bits/stdc++.h>
using namespace std;
long long n,c=0,l=0,l1,l2,s=0;
char ch[1000];
char mc[100000000];
int a[100000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		cin>>ch[i];
		for(int j=1+l;j<=a[i]+l;j++){
			mc[j]=ch[i];
		}
		l+=a[i];

	}
	if(l%2==0){
		l1=l/2;
	}
	else l1=(l+1)/2;
	for(long long i=1;i<=l1;i++){
		if(mc[i]!=mc[l-i]) s++;
	}
	cout<<s+1;
	return 0;
}