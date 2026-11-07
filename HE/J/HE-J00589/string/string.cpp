#include<bits/stdc++.h>
using namespace std;
struct s{
	int m;
	char a; 
}c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c[i].m>>c[i].a; 
	}
	long long ans=0;
	long long i=0;
	long long j=n-1;
	while(i<j){
		if(c[i].a!=c[j].a){
			if(c[i].m>c[j].m){
				ans+=c[j].m;
				c[i].m-=c[j].m;
				j--;
			}else if(c[i].m==c[j].m){
				ans+=c[j].m;
				j--;
				i++;
			}else{
				ans+=c[i].m;
				c[j].m-=c[i].m;
				i++;
			}
		}else{
			if(c[i].m>c[j].m){
				c[i].m-=c[j].m;
				j--;
			}else if(c[i].m==c[j].m){
				j--;
				i++;
			}else{
				c[j].m-=c[i].m;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
