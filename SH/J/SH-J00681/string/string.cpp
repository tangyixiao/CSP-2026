#include <bits/stdc++.h>
using namespace std;
long long n,l,ans;
char s[2005],b[2005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	if(n==1){
		int x;
		char c;
		cin>>x>>c;
		cout<<0;
	}
	else if(n==2){
		int x,y;
		char c1,c2;
		cin>>x>>c1>>y>>c2;
		if(c1==c2)
			cout<<0;
		else
			cout<<min(x,y);
	}
	else{
		for(int i=1;i<=n;i++){
			int x;
			char a;
			cin>>x>>a;
			for(int i=l+1;i<=l+x;i++){
				s[i]=a;
			}
			l+=x;
		}
		int j=1;
		for(int i=l;i>=1;i--){
			b[i]=s[j];
			j++;
		}
		for(int i=1;i<=l;i++){
			if(s[i]!=b[i]){
				ans++;
			}
		}
		cout<<ans/2;
	} 
	return 0;
}
