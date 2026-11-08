#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int bin(int x){
	int r=1,ra=0;
	int t=x,ta=0,tb=1,xa=x;
	for(int i=0 ; ; i++){
		if(r<=x){
			r*=2;
		}
		else{
			break;
		}
	}
	ra=r;
	for(int i=1 ; ; i++){
		
		ra/=2;
		if(x-ra>=0){
			x-=ra;
			tb*=10;
		}
		if(x==0){
			break;
		}
	}
	for(int i=1 ; ; i++){
		
		r/=2;
		if(t-r>=0){
			t-=r;
			ta+=tb;
		}
		if(t==0){
			break;
		}
		tb/=10;
	}
	int e=3;
	for(int i=0 ; ; i++){
		
		if(xa==e){
			ta/=10;
		}
		if(e>xa){
			break;
		}
		e=e*2+1;
	}
	return ta;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,b=0,x,y,ans=0;
	cin >>n>>m;
	for(int i=0 ; i<n ; i++){
		cin >>a[i];
	}
	for(int k=0 ; k<m ; k++){
		for(int i=0 ; i<n ; i++){
			for(int j=i ; j<n ; j++){
				if(k>0){
					if(bin(a[j])&bin(ans)>=b){
						b=bin(a[j])&bin(ans);
						x=j;
						y=j+1;
					}
				}
				else{
					if(bin(a[j])&bin(a[j+1])>=b){
						b=bin(a[j])&bin(a[j+1]);
						x=j;
						y=j+1;
					}
				}
			}
		}
		ans=b;
		b=0;
		a[x]=0;
		a[y]=0;
	}
	cout <<ans;
	return 0;
}
