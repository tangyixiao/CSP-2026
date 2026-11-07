#include<bits/stdc++.h>
#define int long long
using namespace std;
struct str{
	int a;
	char c;
}str[200001];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str[i].a>>str[i].c;
	}
	int ans=0;
	int l=0,r=n-1;
	while(1){
		if(str[l].c!=str[r].c){
			if(str[l].a>str[r].a){
				ans+=str[l].a-str[r].a;
				str[l].a=str[l].a-str[r].a;
				r--;
			}else if(str[l].a<str[r].a){
				ans+=str[r].a-str[l].a;
				str[r].a=str[r].a-str[l].a;
				l++;
			}else{
				ans+=str[l].a;
				l++;
				r--;
			}
		}else{
			if(str[l].a>str[r].a){
				str[l].a=str[l].a-str[r].a;
				r--;
			}else if(str[l].a<str[r].a){
				str[r].a=str[r].a-str[l].a;
				l++;
			}else{
				l++;
				r--;
			}
		}
		if(l>=r){
			break;
		}
	}
	//DEV把我代码换成旧的了，吓哭了
	//幸亏备份了 
	//好习惯好习惯 
	cout<<ans;
	return 0;
}
