#include<bits/stdc++.h>
using namespace std;
int n,ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	vector<int> a(n+5,0);
	vector<char> s(n+5,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		if(s[i]!=s[0]){
			for(int j=i+1;i<n;i++){
				ans+=a[j];
			}
		}
	}
	cout<<ans;
	
	
	
	
	
	
	
	
	return 0;
}
