#include<bits/stdc++.h>
using namespace std;
#define LL long long

int n;
struct str{
	LL len;
	char t;
}s[200005];

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].len>>s[i].t;	
	}
	LL ans=0;
	int i=0;
	while(n-1>i){
		if(s[i].t!=s[n-1].t){
			ans+=min(s[i].len,s[n-1].len);
		}
		if(s[i].len>s[n-1].len){
			s[i].len-=s[n-1].len;
			n--;
		}
		else if(s[i].len<s[n-1].len){
			s[n-1].len-=s[i].len;
			i++;
		}
		else{
			i++;
			n--;
		}
	}
	cout<<ans;
	return 0;
}