#include<bits/stdc++.h>
#define ll long long 
using namespace std;

struct N{
	ll x,y;
	char s;
}f[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	
	int n;
	cin>>n;
	
	ll a;
	char d;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>d;
		f[i].x=f[i-1].y+1;
		f[i].y=f[i].x+a-1;
		f[i].s=d;
		//cout<<f[i].x<<" "<<f[i].y<<" "<<f[i].s<<"\n";
	}
	ll l=1,r=n,sum=0;
	while(l<r){
		ll len1=f[l].y-f[l].x+1,len2=f[r].y-f[r].x+1;
		if(f[l].s==f[r].s){
			if(len1<len2){
				f[r].y-=len1;
				l++;
			}else if(len1>len2){
				f[l].x+=len2;
				r--;
			}else{
				l++;r--;
			}
		}else{
			if(len1<len2){
				f[r].y-=len1;
				l++;
				sum+=len1;
			}else if(len1>len2){
				f[l].x+=len2;
				r--;
				sum+=len2;
			}else{
				l++;r--;
				sum+=len2;
			}	
		}
	}
	cout<<sum;
	return 0;
}

