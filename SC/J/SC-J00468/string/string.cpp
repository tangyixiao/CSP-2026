#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	int n;
	cin>>n;
	int a[20005];
	string s[20005],c[200005];
	int sum2=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		for(int j=sum2+1;j<=sum2+a[i];j++){
			c[j]+=s[i];
		}
		sum2+=a[i];
	} 
	int sum=(sum2+1)/2;
	int ans=0;
	if(sum2==2 && c[1]!=c[2]){
		cout<<1;
		return 0;
	}
	for(int i=1;i<=sum-1;i++){
		if(c[i]!=c[sum2-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
