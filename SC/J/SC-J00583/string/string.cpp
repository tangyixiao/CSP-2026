#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,ans,cnt;
string r,x,c[200005];
char num;
bool f,ff;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i]>>c[i];
	r=c[0];
	for(int i=0;i<n;i++)c[i]==r?f=1:f=0;
	if(f){
		cout<<0;
		return 0;
	}
		for(int j=n,i=0;j==i;j--,i++){
			if(c[i]==c[j]&&a[i]==a[j]){
				continue;
			}
			if(a[i]>=a[j]){
				c[j]=c[i];
				ans+=a[j];
			}else{
				c[i]=c[j];
				ans+=a[i];
			}
		}
	cout<<ans;
	return 0;
}