#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],qsum[200005],hsum[200005],qz,hz,ans;char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
    	qsum[i]=qsum[i-1]+a[i];
	}
    for(int i=n;i>=1;i--){
    	hsum[i]=hsum[i+1]+a[i];
	}
	qz=1;hz=n;
	while(qz!=hz){
		if(qsum[qz]>=hsum[hz]){
			if(c[qz]!=c[hz]){
				if(hsum[hz+1]>=qsum[qz-1]){
					ans+=hsum[hz]-hsum[hz+1];
				}
				else{
					ans+=hsum[hz]-qsum[qz-1];
				}
			}
			hz--;
		}
		else{
			if(c[qz]!=c[hz]){
				if(hsum[hz+1]<=qsum[qz-1]){
					ans+=qsum[qz]-qsum[qz-1];
				}
				else{
					ans+=qsum[qz]-hsum[hz+1];
				}
			}
			qz++;
		}
	}
	cout<<ans;
    return 0;
}