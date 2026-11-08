#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],x=0,y=0,r=0,l=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		r=a[1];
		if(a[1]==1) x++;
		else y++;
		for(int i=2;i<=n;i++){
			if(a[i]==r){
				r=l;
				l=a[i];
			}	
			else if(i==2) l=a[i];
			else if(a[i]==l){
				r=a[i];
				l=0;
			}
			if(r==1||l==1) x++;
			if(r==2||l==2) y++;
		}
		cout<<x<<" "<<y;
	}
	return 0;
} 
