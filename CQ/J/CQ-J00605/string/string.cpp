#include<bits/stdc++.h>
using namespace std;
int a[200005],sum=0,val=0;
char c[200005];
string s;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=sum;j<a[i]+sum;j++){
			s[j]=c[i];
		}
		sum+=a[i];
	} 
	if(sum%2==0){
		for(int i=0;i<sum/2;i++){
			if(s[i]==s[sum+1-i-1]) val++;
		}
	}
	else {
		for(int i=0;i<sum/2+1;i++){
			if(s[i]!=s[sum-i-1]) val++;
		}
	}
	cout<<val;
	return 0;
}

