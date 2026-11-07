#include<bits/stdc++.h>
using namespace std;
char ch[21010];
long long n,x[21010],m,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>ch[i];
	} 
	int y=0;
	for(int i=1;i<=n;i++){
		if(x[i]-x[n-y]==0){
			if(ch[i]==ch[n-y]);
			else {
				ch[i]=ch[n-y];
				ans+=x[i];
			}
			y++;
		}
		else {
			if(x[i]>x[n-y]){
				x[i]=x[i]-x[n-y];
				if(ch[i]==ch[n-y]);
				else {
					ch[n-y]=ch[i];
					ans+=x[n-y];
				}
			}
			else {
				x[n-y]=x[n-y]-x[i];
				ch[i]=ch[n-y];
				if(ch[i]==ch[n-y]);
				else ans+=x[i];
				y++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
