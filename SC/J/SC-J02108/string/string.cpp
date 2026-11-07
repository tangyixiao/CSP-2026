#include<bits/stdc++.h>
using namespace std;
struct is{
	long long s;
	char a;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	vector<is>p(n+1);
	for(int i=0;i<n;i++) cin>>p[i].s>>p[i].a;
	long long ans=0;
	long long l=0,r=n-1;
	while(l!=r){
		if(p[l].s>p[r].s){
			if(p[l].a!=p[r].a) ans+=p[r].s;
			p[l].s-=p[r].s;
			r--;
		}
		else {
		    if(p[l].a!=p[r].a) ans+=p[l].s;	
		    p[r].s-=p[l].s;
		    l++;
	    }   
	}
	cout<<ans;	
	return 0;
} 