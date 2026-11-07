#include <bits/stdc++.h>
using namespace std;
int n,s[200010],l,r;
long long sum=0,ans=0,l_n=0,r_n=0;
char ch[200010];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i]>>ch[i];
		sum+=s[i];
	}
	l=0;
	r=n-1;
	l_n=s[l];
	r_n=s[r];
	while(true){
		if(ch[l]!=ch[r]){
			if(l_n==r_n){
				ans+=min(s[l],s[r]);
			}else{
				ans+=abs(l_n-r_n);
			}
		}
		if(l_n>r_n){
			r--;
			r_n+=s[r];
		}else if(l_n<r_n){
			l++;
			l_n+=s[l];
		}else if(l_n==r_n){
			l++;
			l_n+=s[l];
			r--;
			r_n+=s[r];
		}
		if(l_n+r_n>sum){
			break;
		}
	}
	cout<<ans;
	return 0;
}