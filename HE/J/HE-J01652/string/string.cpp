#include <bits/stdc++.h>
using namespace std;

int a[2000005];
int c[2000005];

bool cmp(int x,int y){
	return x<y;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	string s;
	getline(cin,s);
	for(int i=1;i<=n;i++){
		for(int j=c[i];j<=a[i];j++){
			cin>>s[i];
		}
	}
	sort(a+1,a+n+1,cmp);
	int ans=0;
	for(int i=1;i<=n;i++){
		if(s[i]!=s[n-i]){
			for(int j=1;j<=n/2;j++){
				if(s[i-j]==s[n-i]&&s[i]==s[n-i-j]){
					ans++;
				}
			}
		}
		else{
			cout<<"0";
		}
	}
	cout<<ans;
	return 0;
} 
