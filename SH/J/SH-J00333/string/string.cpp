#include<bits/stdc++.h>
using namespace std;
int a[200010];
char b[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,f=1;
    long long sum=0,cnt=0;
    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			s[sum+j]=b[i];
		}
		sum+=a[i];
	}
	for(int i=sum/2;i<sum;i++){
		if(sum%2==1&&f){
			i++;
			f=0;
		}
		if(s[i]!=s[sum-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 
