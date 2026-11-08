#include<iostream>
using namespace std;
#define int long long
const int N=3e5+10;
int a[N],ans;int n;
char c[N];
int s[N];
int ra[N];
char rc[N];
int rs[N];
int l,r;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
		ra[n-i+1]=a[i];
		rc[n-i+1]=c[i];
	}
	for(int i=1;i<=n;i++){
		rs[i]=rs[i-1]+ra[i];
	}
	for(int i=1,j=0;i<=n;i++){
		int tmp=a[i];
		while(tmp){
			if(rs[j]-r>=tmp){
				r+=tmp;
				ans+=tmp*(rc[j]!=c[i]);
				tmp=0;
			}
			else{//tmp>=rs[j]-r+1;
				ans+=(rs[j]-r)*(rc[j]!=c[i] && j!=0);
				tmp-=rs[j]-r+1;
				r=rs[j]+1;
				j++;
				ans+=(rc[j]!=c[i]);
			}
		}	
	}
	cout<<ans/2;
	return 0;
}
