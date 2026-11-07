#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int ans=0;
	long long n;
	cin>>n;
	long long a[1000005],s[1000005];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		string w=0;
		string c=0;
		c+=s[i]; 
		for(int j=1;j<=a[i];j++){
			w+=s[i];
			if(w/2!=c){
				ans++;
			}
		}
			
	}
	cout<<ans;
	return 0;
}
