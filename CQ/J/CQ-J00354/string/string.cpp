#include<bits/stdc++.h>
using namespace std;
long long n;
long long ans=0;
struct ff{
	long long data;
	char t;
}p[1000000];
//十年OI一场空，不开long long见祖宗 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;n>=i;i++)cin>>p[i].data>>p[i].t;
	long long l=1,r=n;
	while(r>l){
		if(p[l].t==p[r].t){
			if(p[l].data>p[r].data){
				p[l].data-=p[r].data;
				p[r].data=0;
			}
			else {
				p[r].data-=p[l].data;
				p[l].data=0;
			}
		}
		else {
			if(p[l].data>p[r].data){
				p[r].t=p[l].t;
				ans+=p[r].data;
				p[l].data-=p[r].data;
				p[r].data=0;
			}
			else {
				p[l].t=p[r].t;
				ans+=p[l].data;
				p[r].data-=p[l].data;
				p[l].data=0;
			}
		}
		if(p[l].data==0)l++;
		if(p[r].data==0)r--;
	}
	cout<<ans;
}
