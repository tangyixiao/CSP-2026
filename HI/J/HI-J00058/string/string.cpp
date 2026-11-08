#include<bits/stdc++.h>
using namespace std;
string a,x,y;
int n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int b;
		string c;
		cin>>b>>c;
		for(int j=1;j<=b;j++){
			a=a+c;
		}
	}
	int l=a.size();
	if(l%2==0){
		for(int i=0;i<=l/2-1;i++){
			x=x+a[i];
		}
		for(int i=l/2;i<=l;i++){
			y=y+a[i];
		}
		if(x==y){
			cout<<0;
			return 0;		
		}
		else{
			for(int i=0;i<=l/2-1;i++){
				if(x[i]!=y[l/2-1-i]) ans++;
			}
			cout<<ans;
		}
	}
	else{
		for(int i=0;i<=l/2-1;i++){
			x=x+a[i];
		}
		for(int i=l/2+1;i<=l;i++){
			y=y+a[i];
		}
		if(x==y&&x[0]==a[l/2]){
			cout<<0;
			return 0;		
		}
		else{
			for(int i=0;i<=l/2-1;i++){
				if(x[i]!=y[l/2-1-i]) ans++;
			}
			cout<<ans;
		}
	}
	return 0;
} 
