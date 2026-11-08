#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char a[200010];
	int  b[200010];
	int n;
	cin>>n;
	
    for(int i=1;i<=n;i++){
    	int m;
    	cin>>m;
    	b[i]=m;
    	
    	char c;
    	cin>>c;
    	a[i]=c;
	}
long long ans=0;
int l=1,r=n;
while(l<r){
	if(a[l]==a[r]){
		if(b[l]>=b[r]){
			b[l]=b[l]-b[r];
			r--;
		}else{
			b[r]=b[r]-b[l];
			l++;
		}
	}else{
		if(b[l]>=b[r]){
			b[l]=b[l]-b[r];
			ans=ans+b[r];
			r--;
		}else{
			b[r]=b[r]-b[l];
			ans=ans+b[l];
			l++;
		}
	}
}

cout<<ans;
return 0;

    

}
