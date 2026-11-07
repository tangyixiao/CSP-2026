#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string1.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		char m[2000010];
		for(int j=0;j<a;j++){
			m[ans]=c; 
			ans++;
		}
		for(int i=0;i<=ans/2;i++){
			if(m[i]!=m[ans-i-1]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
} 				
