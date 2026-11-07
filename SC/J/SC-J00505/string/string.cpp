#include<bits/stdc++.h>
using namespace std;
long long n,c,ans;
const long long N=200100;
char s[N];
long long num[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>num[i]>>s[i];
	}
	long long x,place=1,y,hou=n;
	x=num[place];
	y=num[hou];
	while(place<hou){
		if(x<y){
			if(s[place]!=s[hou])ans+=x;
			place++;
			num[hou]-=x;
		}
		if(y<x){
			if(s[place]!=s[hou])ans+=y;
			hou--;
			num[place]-=y;
		}
		if(y==x){
			if(s[place]!=s[hou])ans+=x;
			hou--;
			place++;
		}
	}
	cout<<ans;
	return 0;
}