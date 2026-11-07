#include <bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
}s[200020];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		int A;
		char C;
		cin>>A>>C;
		if(C==s[cnt].c){
			s[cnt].a+=A;
		}else{
			cnt++;
			s[cnt].a=A;
			s[cnt].c=C;
		}
	}
	long long l=1,r=cnt,ans=0;
	while(l<r){
//		cout<<l<<" "<<s[l].a<<" "<<s[l].c<<" "<<r<<" "<<s[r].a<<" "<<s[r].c<<endl;
		if(s[l].c==s[r].c){
			if(s[l].a>s[r].a){
				s[l].a-=s[r].a;
				s[r].a=0;
				r--;
			}else if(s[l].a<s[r].a){
				s[r].a-=s[l].a;
				s[l].a=0;
				l++;
			}else{
				s[l].a=0;
				s[r].a=0;
				l++;
				r--;
			}
		}else{
			if(s[l].a>s[r].a){
//				cout<<l<<" "<<s[l].a<<" "<<r<<" "<<s[r].a<<endl;
				s[r].c=s[l].c;
				ans+=s[r].a;
				
				s[l].a-=s[r].a;
//				cout<<l<<" "<<s[l].a<<" "<<r<<" "<<s[r].a<<endl;
				s[r].a=0;
				r--;
			}else if(s[l].a<s[r].a){
				s[l].c=s[r].c;
				ans+=s[l].a;
				s[r].a-=s[l].a;
				s[l].a=0;
				l++;
			}else{
				s[l].c=s[r].c;
				ans+=s[l].a;
				s[l].a=0;
				s[r].a=0;
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
