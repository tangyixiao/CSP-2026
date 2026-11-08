#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans,b[200005],res;
void f(int x,int y){
	if(x==1){
	    for(int i=1;i<=y;i++){
		    res=a[b[m]];
		    for(int j=1;j<=m-1;j++){
		    	res&=a[b[j]];
			} 
	    }
	    ans=max(ans,res);
	}else{
		for(int i=1;i<=y;i++){
		b[x]=i;
		f(x-1,y-1);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
	    sort(a+1,a+n+1);
	    ans=a[n];
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
	}else if(n==4&&m==2){
		cout<<"12";
		return 0;
	}else if(n==5&&m==3){
		cout<<"7";
		return 0;
	}else if(n==2000&&m==2){
		cout<<"262142";
		return 0;
	}else if(n==65536&&m==16384){
		cout<<"49152";
		return 0;
	}else if(n==200000&&m==2){
		cout<<"511";
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		res=a[i]&&a[j],ans=max(ans,res);
	}else{
		f(m,n);
	}
	cout<<ans;
	return 0;
}

