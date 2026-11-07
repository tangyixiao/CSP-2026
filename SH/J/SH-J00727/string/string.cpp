#include<bits/stdc++.h>
using namespace std;
#define int long long
struct str{
	int a;
	char c;
}s[200005];
int n,top_front,top_end,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
	}
	top_front=1,top_end=n;
	while(top_front<top_end){
		if(s[top_front].c==s[top_end].c){
			if(s[top_front].a==s[top_end].a){
				top_front++,top_end--;
			}else if(s[top_front].a>s[top_end].a){
				s[top_front].a-=s[top_end].a,top_end--;
			}else{
				s[top_end].a-=s[top_front].a,top_front++;
			}
		}else{
			if(s[top_front].a==s[top_end].a){
				ans+=s[top_front].a;
				top_front++,top_end--;
			}else if(s[top_front].a>s[top_end].a){
				ans+=s[top_end].a;
				s[top_front].a-=s[top_end].a,top_end--;
			}else{
				ans+=s[top_front].a;
				s[top_end].a-=s[top_front].a,top_front++;
			}
		}
		//cout<<top_front<<" "<<top_end<<"\n";
	}
	cout<<ans;
	return 0;
} 
