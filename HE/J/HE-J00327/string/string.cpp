#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
string s;
int ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		while(a[i]){
			s+=c[i];
			a[i]--;
		}
	}
	int l=s.size(),l2=l/2,i=0;
	while(l2){
		if(s[i]!=s[l-i-1]){
			s[l-i-1]=s[i];
			ans++;
		}
		i++;
		l2--;
	} 
	cout<<ans;
	return 0;
}
