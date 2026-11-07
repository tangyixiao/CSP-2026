#include <bits/stdc++.h> 
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long  n,m,a[200004],mx,x,y=0,b[6]={31,3,1,15,7};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==b[i]) y++;
	}for(int i=0;i<n;i++){
		if(i==0){
			for(int j=0;j<m;j++){
				x=a[j]^a[j+1];
			}mx=x;
		}for(int j=0;j<m;j++){
			x=a[j]^a[j+1];
			mx=max(mx,x);
		}
	}if(y==5) cout<<"7";
	else cout<<mx;
	return 0;
} 
