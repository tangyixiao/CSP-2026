#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int a;
	char c;
}str[300000];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	int n,ans=0,lose=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>str[i].a>>str[i].c;
	for(int i=1,j=n;i<=j;){
		if(str[i].c!=str[j].c){
			ans+=min(str[j].a,str[i].a);
		}if(str[i].a<str[j].a)
			str[j].a-=str[i].a,i++;
		else{
			if(str[i].a>str[j].a){
				str[i].a-=str[j].a,j--;
			}else i++,j--;
		}if(!str[j].a) j--;
		if(!str[i].a) i++;
	}cout<<ans;
	return 0;
}