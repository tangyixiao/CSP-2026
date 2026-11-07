#include<bits/stdc++.h>
using namespace std;
struct c{
	long long t;
	char s;
}c[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i].t>>c[i].s;
	}
	int i=1,j=n;
	while(i<j){
		if(c[i].t>c[j].t){
			if(c[i].s==c[j].s){
				c[i].t-=c[j].t;
				j--;
			}
			else{
				ans+=c[j].t;
				c[i].t-=c[j].t;
				j--;
			}
		}
		else{
			if(c[i].s==c[j].s){
				c[j].t-=c[i].t;
				i++;
			}
			else{
				ans+=c[i].t;
				c[j].t-=c[i].t;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
