#include<bits/stdc++.h>
using namespace std;
const int MAX=2e5+10;
struct node{
	long long a;
	char c;
}s[MAX];
long long n,l=1,r,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++) cin>>s[i].a>>s[i].c;
	while(l<r){
		if(s[l].c==s[r].c){//如果前后匹配 
			if(s[l].a>s[r].a){
				s[l].a-=s[r].a;
				r--; 
			}
			else if(s[l].a==s[r].a){
				r--;
				l++;
			}
			else if(s[l].a<s[r].a){
				s[r].a-=s[l].a;
				l++;
			}
		}else{//不匹配 
			if(s[l].a>s[r].a){
				ans+=s[r].a;
				s[l].a=s[l].a-s[r].a;
				r--; 
			}
			else if(s[l].a==s[r].a){
				ans+=s[l].a;
				r--;
				l++;
			}
			else if(s[l].a<s[r].a){
				ans+=s[l].a;
				s[r].a-=s[l].a;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
