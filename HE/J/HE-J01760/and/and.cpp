#include<iostream>
using namespace std;
int a[200009];
int n,m;
int d(int A,int B){
	if(B>=m){
		return A;
	}
	int na=0;
	int j=0;
	for(int i=0;i<n;i++){
		if(A&a[i]>=na){
			na=A&a[i];
			j=i;
		}
	}
	a[j]=0;
	d(na,B+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ma=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ma=ma|a[i];
	}
	if(m=n){
	    for(int i=0;i<n;i++){
		    ma=ma&a[i];
	    }
	    cout<<ma;
	    return 0;
	}
    cout<<d(ma,0);
	return 0;
}
