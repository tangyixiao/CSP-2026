#include<bits/stdc++.h>
using namespace std;
int n,ans=0,x[200005];
char a[200005];
int main(){
	freopen("string.in","r",stdin);//Trick||Treat!
	freopen("string.out","w",stdout);
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		cin>>x[i]>>a[i];
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(x[l]>x[r]){
			if(a[l]!=a[r]){
				ans+=x[r];
				//cout<<x[r]<<endl;
			}
			x[l]-=x[r];
			r--;
		}else if(x[l]==x[r]){
			if(a[l]!=a[r]){
				ans+=x[r];
				//cout<<x[r]<<endl;
			}
			l++;
			r--;
		}else{
			if(a[l]!=a[r]){
				ans+=x[l];
			}
			x[r]-=x[l];
			l++;
		}
	} 
	cout<<ans;
}
