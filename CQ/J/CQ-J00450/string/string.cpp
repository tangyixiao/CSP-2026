#include<bits/stdc++.h>
using namespace std;

int n;
int a[200010];
char c[200010];
long long h;
long long lh,rh,ans;
int l=1,r;
char l1,r1;
long long l2,r2;
int num=0;


int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		h=h+a[i];
	}
	r=n;
	while(1){
		if(lh+rh==h) break;
		if(h%2==1&&lh+rh==h-1) break;
		if(l2==0){
			if(lh+a[l]>h/2){
				l2=h/2-lh;
				lh=h/2;				
				l1=c[l];
			}
			else{
				lh=lh+a[l];
				l2=a[l];
				l1=c[l];
				l++;
			}
		}
		if(r2==0){
			if(rh+a[r]>h/2){
				r2=h/2-rh;
				rh=h/2;			
				r1=c[r];
			}
			else{
				rh=rh+a[r];
				r2=a[r];
				r1=c[r];
				r--;
			}
		}
		if(r1!=l1) ans=ans+min(r2,l2);
		int x=min(r2,l2);
		r2=r2-x;
		l2=l2-x;
		num++;
		if(num==300000) break;
	}
	
	cout<<ans;
	
	return 0;
} 
