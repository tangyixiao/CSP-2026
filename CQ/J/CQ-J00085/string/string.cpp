#include<bits/stdc++.h>
using namespace std;
long long n,ans;
const int N=1e8;
struct node{
	long long x;
	char y;
}s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].x>>s[i].y;
	}
	int l=1,r=n;
	while(l<=r){
		if(s[l].y==s[r].y){
			if(s[l].x<s[r].x){
				s[r].x-=s[l].x;
				l++;
			}
			else if(s[l].x==s[r].x)l++,r--;
			else {
				s[l].x-=s[r].x;
				r--;
			}
		}
		else{
			if(s[l].x<s[r].x){
				ans+=s[l].x;
				s[r].x-=s[l].x;
				l++;
			}
			else if(s[l].x==s[r].x){
				ans+=s[l].x;
				l++,r--;
			}
			else {
				ans+=s[r].x;
				s[l].x-=s[r].x;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
} 
