#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,sum,minn=1e9;
int a[1000005];
char c[1000005];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s[j]=c[i];
		}
	}
	int p=0;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			if(s[j]!=s[i]){
				p++;
				s[j]=s[i];
			}
		}
		if(minn>p){
			minn=p;
		}
	}
	cout<<minn;
	return 0;
}
