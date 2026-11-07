#include<bits/stdc++.h>
using namespace std;
long long n,p1,p2,z1,z2,len,mid,ans;
struct node{
	long long a;
	char c; 
} s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		len+=s[i].a;
	}
	mid=len/2;
	z1=0;z2=n;
	while(p1+p2<=len){
		if(z1==z2)break; 
		while(p2<p1){
			if(p1-p2>=s[z2].a){
				if(s[z1].c!=s[z2].c){
					ans+=s[z2].a; 
				}
				p2+=s[z2].a;
				z2--;
			}
			else{
				s[z2].a-=p1-p2;
				if(s[z1].c!=s[z2].c){
					ans+=p1-p2;
				}
				p2=p1;
			}
		}
		p1+=s[++z1].a;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
