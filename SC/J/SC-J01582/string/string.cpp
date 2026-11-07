#include<iostream>
#include<fstream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned int n=2e5;
	cin>>n;
	struct node{
		unsigned int a;//1e9
		char c;
	}s[n];
	for(unsigned int i=0;i<n;i++)
		cin>>s[i].a>>s[i].c;
	unsigned int l=0,r=n-1;
	unsigned long long ans=0;
	while(l<r){
		if(s[l].c==s[r].c){
			if(s[l].a<=s[r].a){
				s[r].a-=s[l].a;
				l++;//s[l].a=0;
			}else{
				s[l].a-=s[r].a;
				r--;//s[r].a=0;
			}
		}else{
			if(s[l].a<=s[r].a){
				s[r].a-=s[l].a;
				ans+=s[l].a;
				l++;//s[l].a=0;
			}else{
				s[l].a-=s[r].a;
				ans+=s[r].a;
				r--;//s[r].a=0;
			}
		}
	}
	cout<<ans;
}