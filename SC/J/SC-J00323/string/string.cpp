#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct stu{
	int a;
	char b;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	vector<stu> s(n+5,{0,' '});
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].b;
	}
	ll i=1,j=n,ans=0;
	while(i<j){
		bool f=0;
		if(s[i].b!=s[j].b){//不同 要改 
			f=1;
		}else{
			f=0;
		}
		if(s[i].a<s[j].a){	
			if(f){
				ans+=s[i].a;
			}
			s[j].a-=s[i].a;
			i++;
		
		}else if(s[i].a>s[j].a){
			if(f){
				ans+=s[j].a;
			}
			s[i].a-=s[j].a;
			j--;
		}else{
			if(f){
				ans+=s[i].a;
			}
			i++;
			j--;
		}
	}
	cout<<ans;
	return 0;
}
