#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
long long m;
long long gl,gr;
char tl,tr;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	m=m/2;
	long long l=1,r=n;
	while(gl<m&&gr<m){
		if(gl+a[l]<=m){
			gl+=a[l];
			a[l]=0;
			tl=c[l];
			l++;
		}else{
			a[l]-=(m-gl);
			tl=c[l];
			gl=m;
		}
		while(gr<gl){
			if(gr+a[r]<=gl){
				tr=c[r];
				if(tl!=tr){
					ans+=a[r];
//					cout<<c[r]<<" "<<a[r]<<" "<<r<<endl;
				}
				gr+=a[r];
				a[r]=0;
				r--;
			}else{
				a[r]-=(gl-gr);
				tr=c[r];
				if(tl!=tr){
					ans+=(gl-gr);
//					cout<<c[r]<<" "<<gl-gr<<" "<<r<<endl;
				}
				gr=gl;
			}
		}
	}
	cout<<ans;
	return 0;
}
