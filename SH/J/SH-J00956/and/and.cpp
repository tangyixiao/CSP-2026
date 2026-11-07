#include<bits/stdc++.h>
using namespace std;
long long n,m,cnt,cntt,maxnn,a[200005],s[10000005],ss[10000005],sss[10000006],maxn=0,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++){
			if(maxn<=a[i])
				maxn=a[i];	
		}
		cout<<maxn;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cnt=a[i];
		for(int j=i+1;j<=n;j++){
			cntt=a[j];
			long long k=1;
			while(cnt){
				s[k]=cnt%2;
				cnt/=2;
				k++;
			}
			maxn=k;
			k=1;
			while(cntt){
				ss[k]=cntt%2;
				cntt/=2;
				k++;
			}
			long long lk=max(maxn,k);
			for(int l=1;l<=lk;l++){
				if(s[l]==1&&ss[l]==1)
					sss[l]=1;
				else
					sss[l]=0;
			}
			long long mm=1;
			for(int i=1;i<=lk;i++){
				ans+=mm*sss[i];
				mm*=2;
			}
			if(maxnn<=ans)
				maxnn=ans;
			ans=0;
			for(int i=1;i<=lk;i++){
				s[i]=0;
				ss[i]=0;
				sss[i]=0;
			}
		}
	}
	cout<<maxnn;
	return 0;
}
