#include<bits/stdc++.h>
using namespace std;
long long n,l[200060],ans=0;
char s[200060];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i]>>s[i];
	}
	long long x=1,y=n;
	while(x<y){
		if(s[x]==s[y]){
			if(l[x]>l[y]){
				y--;
				l[x]-=l[y];
			}
			else if(l[x]<y){
				x++;;
				l[y]-=l[x];
			}
			else{
				x++;
				y--;
			}
		}
		else{
			if(l[x]>l[y]){
				y--;
				l[x]-=l[y];
				ans+=l[y];
			}
			else if(l[x]<y){
				x++;;
				l[y]-=l[x];
				ans+=l[x];
			}
			else{
				x++;
				y--;
				ans+=l[x];
			}
		}
	}
	cout<<ans;
	return 0;
}
