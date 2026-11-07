#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdout);
	freopen("string.out","w",stdin);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	string s="";
	for(int i=1;i<=n;i++) for(int j=1;j<=a[i];j++) s+=c[i];
	int left=0,right=s.length()-1;
	int ans=0;
	while(left<right){
		if(s[left]!=s[right]) ans++;
		left++;
		right--;
	}
	cout<<ans;
	
	
	return 0;
}
