#include<bits/stdc++.h>
using namespace std;
int n;
struct A{
	int a;
	char c;
}; 
A s[200010];
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
	}
	
	int l=1,r=n;
	while(r>l){
		if(s[r].a==s[l].a){
			if(s[r].c!=s[l].c){
				cnt+=s[r].a;	
			}
			l++;
			r--;
		}else{
			if(s[l].a>s[r].a){
				if(s[l].c==s[r].c){
					s[l].a=s[l].a-s[r].a;
					r--;
				}else{
					s[l].a=s[l].a-s[r].a;
					cnt+=s[r].a;
					r--;
				}
			}else{
				if(s[l].c==s[r].c){
					s[r].a=s[r].a-s[l].a;
					l++;
				}else{
					s[r].a=s[r].a-s[l].a;
					cnt+=s[l].a;
					l++;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
} 
