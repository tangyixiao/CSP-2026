#include<bits/stdc++.h>
using namespace std;
int a[200005];
string b;
string c;
bool check(int x,string c,int y){
	int cut=0;
	for(int i=0;i<y;i++){
		if(c[i]!=c[y-i-1]){
			cut++;
			c[i]=c[y-i-1];
		}
	}
	return cut<=x;
}
int main(){
	 freopen("string.in","r",stdin);
	 freopen("string.out","w",stdout);
	 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	 int n;
	 cin >>n;
	 for(int i=1;i<=n;i++){
	 	cin >>a[i];
	 	cin >>b[i];
	 	for(int j=1;j<=a[i];j++){
	 		c+=b[i];
		 }
	 }
	 int l=0;
	 int r=1e9;
	 int ans=0;
	 int d=0;
	 int mid;
	 d=c.size();
	 while(l<=r){
	 	mid=(l+r)/2;
	 	if(check(mid,c,d)){
	 		ans=mid;
	 		r=mid-1;
		}
		else{
			l=mid+1;	
		}
	 }
	 cout <<ans;
	 return 0;
}
