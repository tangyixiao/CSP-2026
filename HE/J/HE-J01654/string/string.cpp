#include<bits/stdc++.h>
using namespace std;
struct e{
	long long a;
	char b;
}s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	long long ans=0;
	for(long long i=1;i<=n;i++) cin >> s[i].a >> s[i].b; 
	long long l=1,r=n;
	while(l<r){
		if(s[l].b==s[r].b){
			if(s[l].a > s[r].a) s[l].a-=s[r].a,r--;
	        else if(s[l].a == s[r].a) s[l].a-=s[r].a,r--,l++;
			else s[r].a-=s[l].a,l++;
		}
		else{
			if(s[l].a > s[r].a) s[l].a-=s[r].a,ans+=s[r].a,r--;
			else if(s[l].a == s[r].a) s[l].a-=s[r].a,ans+=s[r].a,r--,l++;
			else s[r].a-=s[l].a,ans+=s[l].a,l++;
		}
	}
	cout << ans;
	return 0;
}
