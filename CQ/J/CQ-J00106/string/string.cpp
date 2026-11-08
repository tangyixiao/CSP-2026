#include<bits/stdc++.h>
using namespace std;
char c[100010];
int a[100010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","l",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[cnt]=c[i];
			cnt++;
		}
	}
	cnt--;
	long long mid=cnt/2;
	for(int i=1;i<=mid;i++){
		if(s[i]==s[i+mid]){
			ans++;
		}
	}
	cout<<mid-ans;
	return 0;
}
