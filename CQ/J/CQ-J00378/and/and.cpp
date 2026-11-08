#include<bits/stdc++.h>
using namespace std;

const int N=200005,M=35;
long long n,m,x,cnt,aaa,mx,ans,b,dl,a[N],sum[N],d[N];
bool flag1,flag2,s[N][M],fl[N];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	flag1=1,flag2=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i];
		x=a[i];
		cnt=0;
		aaa=max(aaa,a[i]);
		if(a[i]!=i-1){
			flag2=0;
		}
		while(x){
			s[i][35-cnt]=x%2;
			if(x%2==1){
				sum[i]++;
			}
			else{
				flag1=0;
			}
			x/=2;
			cnt++;
		}
	}
	
	
	
	if(m==1){
		cout<<aaa;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(flag1==1){
		ans=1;
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(flag2==1){
		cout<<n-2;
		return 0;
	}
	
	
	
	memset(fl,1,sizeof(fl));
	for(int i=35;i>=1;i--){
		mx=0;
		for(int j=1;j<=n;j++){
			if(s[j][i]==1){
				if(dl==1){
					if(fl[j]==1){
						mx++;
					}
				}
				else{
					mx++;
				}
			}
		}
		if(mx==m){
			b=0;
			for(int j=1;j<=n;j++){
				if(s[j][i]==1){
					b++;
					if(b==1){
						ans=a[j];
					}
					else{
						ans=ans&a[j];
					}
				}
			}
			cout<<ans;
			return 0;
		}
		if(mx>m){
			dl=1;
			for(int j=1;j<=n;j++){
				if(s[j][i]!=1){
					fl[j]=0;
				}
			}
		} 
	}
	if(dl==0){
		cout<<0;
		return 0;
	}
	b=0;
	for(int i=1;i<=n;i++){
		if(fl[i]==1 && b==0){
			ans=a[i];
			b++;
			m--;
		}
		else if(fl[i]==1){
			b++;
			ans=ans&a[i];
			m--;
		}
		if(m==0){
			break;
		}
	}
	cout<<ans;
	return 0;
}
