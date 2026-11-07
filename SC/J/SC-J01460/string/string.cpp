#include<bits/stdc++.h>
using namespace std;
//struct f{
//	char st[1000000010];
//	int 
//}s[200010];
char s[20000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		l=l+a;
		for(int j=l-a+1;j<=l;j++){
			//cin>>s[i].st[j];
			s[j]=c;
		}
	}
	
	int ans=0;
	if(l%2==1){
		for(int i=1;i<=(l-1)/2;i++){
			if(s[i]!=s[l-i+1]){
				ans++;
			}
			else{
				continue;
			}
		}
	}
	else{
		for(int i=1;i<=l/2;i++){
			if(s[i]!=s[l-i+1]){
				ans++;
			}
			else{
				continue;
			}
		}
	}
	cout<<ans;
	return 0;
}