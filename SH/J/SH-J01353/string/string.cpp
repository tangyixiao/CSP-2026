#include<bits/stdc++.h>
using namespace std;

int n,sum=0,ans=0;
int a[200005];
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	string s="";
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i] >> c[i];
		sum+=a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	
	int l=sum/2;
	for(int i=0;i<l;i++){
		if(s[i]!=s[sum-i-1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
