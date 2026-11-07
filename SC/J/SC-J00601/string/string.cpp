#include<bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char c;
}val[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>val[i].a>>val[i].c;
	}
	long long ans=0;
	int k=n;
	for(int i=1;i<=n;i++){
		while(val[i].a){
			if(val[i].a>=val[k].a){
				if(val[i].c!=val[k].c){
					ans+=val[k].a;
				}
				val[i].a-=val[k].a;
				val[k].a=0;
				k--;
			}
			else {
				if(val[i].c!=val[k].c){
					ans+=val[i].a;
				}
				val[k].a-=val[i].a;
				val[i].a=0;
			}
		}
	}
	cout<<ans;
	return 0;
}