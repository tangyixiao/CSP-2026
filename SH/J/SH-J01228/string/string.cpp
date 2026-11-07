#include<bits/stdc++.h>
using namespace std;
long long num[10005];
char a[10005];
char b[1000005];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
long long n,ans,re;
ans=0;
re=0;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>num[i]>>a[i];
	ans+=num[i];
}
for(int i=1;i<=n;i++){
	for(int j=1;j<=num[i];j++)b[j+i-1]=a[i];
}
	for(int j=1;j<=ans/2;j++){
		if(b[j]!=b[ans+1-j])re++;
	}
	cout<<re;
} 
