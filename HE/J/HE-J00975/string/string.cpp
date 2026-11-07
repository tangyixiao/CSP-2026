#include<bits/stdc++.h>
using namespace std;

long long a[1000000]={0};
long long pre[1000000]={0};
string s[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long i , j , z , cnt=0 , ans=0 , z1 , x=n;
	for(i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		pre[i]=pre[i-1]+a[i];
	}
	for(i=1;i<=n;i++){
		if(pre[i]>pre[n]/2){
			z=pre[n]/2;
			z1=i;
			break;
		}
	}
	for(i=1;i<z1;){
		if(cnt!=0){
			if(s[i]!=s[x]){
				ans+=min(cnt,a[x]);
				long long c=cnt;
				cnt-=min(cnt,a[x]);
				if(cnt!=0){
					a[x]=0;
					x--;
				}
				else{
					i++;
					a[x]-=c;
				}
			}
			else{
				long long c=cnt;
				cnt-=min(cnt,a[x]);
				if(cnt!=0){
					a[x]=0;
					x--;
				}
				else{
					i++;
					a[x]-=c;
				}
			}
		}
		else{
			cnt=a[i];
		}
		for(x=x-1;x>z1;x--){
			ans+=a[x];
		}
	}
	cout<<ans;
	return 0;
}
