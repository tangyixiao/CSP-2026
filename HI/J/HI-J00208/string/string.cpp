#include<bits/stdc++.h>
using namespace std;
int a[200005];
char s[200005];
string s1,s2;
long long sum,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		sum=sum+a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s1=s1+s[i];
			s2=s[i]+s2;
		}
	}
	if(sum%2==1){
		sum=sum/2+1;
	}else{
		sum=sum/2;
	}
	for(long long i=1;i<=sum;i++){
		if(s1[i]!=s2[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
