#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,a[N],len,sum[N],ans,x=1,b[N];
char c[N],s[N];
bool f=1;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];	
	}
	b[1]=a[1];
	for(int i=2;i<=n;i++){
		if(c[i]==c[i-1]){
			b[x]+=a[i];
			s[x]=c[i];
		}
		else{
			x++;
			b[x]=a[i];
			s[x]=c[i];
		}
	}
	if(x==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=x;i++){
		if(b[i]!=b[x-i+1]||s[i]!=s[x-i+1]){
			f=0;
			break;
		}
	}
	if(f){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=x;i++){
		sum[i]=sum[i-1]+b[i];
	}
	int k=x/2;
	for(int i=1;i<=k;i++){
		if(b[i]==len/2){
			for(int j=i+1;j<=x;j++){
				if(s[j]!=s[i]){
					ans+=b[j];
				}
			}
			break;
		}
		int tmp=len-sum[i]+1,j,tail=tmp+b[i]-1,t;
		int l=1,r=n;
		while(l<r){
			int mid=(l+r)/2;
			if(sum[mid]<tmp){
				j=mid;
				l=mid+1;
			}
			else{
				r=mid-1;
			}
		}
		l=1,r=x;
		while(l<r){
			int mid=(l+r)/2;
			if(sum[mid]>=tail){
				t=mid;
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		j++;
		if(b[i]==b[j]&&s[i]==s[j]){
			continue;
		}
		else if(b[i]==b[j]){
			ans+=b[i];
		}
		else{
			if(tmp>b[j]){
				int now=b[j];
				b[j]=tmp-sum[j-1];
				x++;
				for(int m=x;m>=j+2;m--){
					b[m]=b[m-1];
					s[m]=s[m-1];
				}
				b[j+1]=now-b[j];
				s[j+1]=s[j];
			}	
			if(tail<b[t]){
				int now=b[t];
				b[t]=sum[t]-tail;
				x++;
				for(int m=x;m>=t;m--){
					b[m]=b[m-1];
					s[m]=s[m-1];
				}
				b[t]=now-b[t+1];
				s[t]=s[t+1];
			}
			for(int m=j;m<=t;m++){
				if(s[m]!=s[i]){
					ans+=b[m];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}