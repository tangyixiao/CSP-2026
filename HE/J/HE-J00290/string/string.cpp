#include<bits/stdc++.h>
using namespace std;
int n,a,bg=1,ed;
long long e;
char c;
struct node{
	int a;
	char c;
}s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ed=n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		s[i]={a,c};
	}
	while(bg<ed){
		int a1=s[bg].a;
		char c1=s[bg].c;
		int a2=s[ed].a;
		char c2=s[ed].c;
		if(c1!=c2){
			if(a1>a2){
				e+=a2;
				s[bg].a-=a2,s[ed].a=0;
				--ed;
				//if(bg==ed) break;
			}else if(a1<a2){
				e+=a1;
				s[ed].a-=a1,s[bg].a=0;
				++bg;
				//if(bg==ed) break;
			}else{
				e+=a1;
				s[ed].a=0,s[bg].a=0;
				++bg,--ed;
				//if(bg==ed) break;
			}            
		}else{
			if(a1>a2){
				s[bg].a-=a2,s[ed].a=0,--ed;
			//	if(bg==ed) break;
			}else if(a1<a2){
				s[ed].a-=a1,s[bg].a=0,++bg;
				//if(bg==ed) break;
			}else{
				s[bg].a=0,s[ed].a=0;
				++bg,--ed;
				//if(bg==ed) break;
			}        
		}
	}
	cout<<e;
	return 0;
}

