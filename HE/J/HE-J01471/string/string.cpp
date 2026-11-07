#include <bits/stdc++.h>
using namespace std;
const int M=2e5+10;
int n;
long long ans=0; 
long long mp[M];
char a[M];
int main(){
	freopen("string.in", "r" ,stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	int m=0;
	string k;
	for(int i=1;i<=n;i++){
		cin>>mp[i]>>a[i];
		if(a[i]==a[i-1]){
			mp[i-1]+=mp[i];
			i--;
			n--;
		}
	}
	for(int i=1;i<=n/2;i++){
		int j=n-i+1;
		if(a[i]!=a[j]){
			ans+=max(mp[i],mp[j]);
			if(mp[i]>mp[j]){
				mp[j-1]-=mp[i]-mp[j];	
			}
			else mp[i+1]-=mp[j]-mp[i];
			
		}
		else {
			//ans+=abs(mp[i]-mp[j]);
			if(mp[i]>mp[j])mp[j-1]-=mp[i]-mp[j];
			else mp[i+1]-=mp[j]-mp[i];
		}
	}
	cout<<ans; 
	return 0;
} //aaabkddd 5 
