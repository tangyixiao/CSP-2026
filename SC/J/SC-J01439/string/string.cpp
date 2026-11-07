#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s[N];
long long sum=0,n,a[N],ans=0,s1[N];
bool q=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>a[0]>>s[0];
	for(int j=0;j<sum+a[0];j++){
			s1[j]=s[0]-96;
		}
	sum+=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i]>>s[i];
		if(s[i]!=s[i-1]){
			q=1;
		}
		for(int j=sum;j<sum+a[i];j++){
			s1[j]=s[i]-96;
		}
		sum+=a[i];
	}
	if(q==0){
		cout<<0;
		return 0;
	}
	for(int i=0;i<sum/2;i++){
		if(s1[i]!=s1[sum-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}