#include <bits/stdc++.h>
using namespace std;
struct a{
	long long x;
	char y;
}s[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,f=1,d=0;
	cin>>n;
	int m=n;
	for(int i=1;i<=n;i++){
		cin>>s[i].x>>s[i].y;
	}
	while(f<=m){
		if(s[f].y!=s[m].y){
			d+=min(s[f].x,s[m].x);
		}
		if(s[f].x<s[m].x){
			s[m].x-=s[f].x;
			f++;
		}else{
			if(s[f].x==s[m].x){
				f++;
				m--;
			}else{
				s[f].x-=s[m].x;
				m--;
			}
		}
	}
	cout<<d;
	return 0;
}
