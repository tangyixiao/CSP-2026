#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],sum,a1[200005],a2[200005],cnt1,cnt2;
char c[200005],c1[200005],c2[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int cnt=0;
	bool flag=0;
	if(sum%2==1) flag=1;
	for(int i=1;i<=n;i++){
		if(cnt+a[i]<sum/2){
			cnt+=a[i];
			a1[++cnt1]=a[i];
			c1[cnt1]=c[i];
		}
		else if(cnt+a[i]==sum/2&&flag==0){
			cnt+=a[i];
			a1[++cnt1]=a[i];
			c1[cnt1]=c[i];
		}
		else if(cnt+a[i]==sum/2&&flag==1){
			cnt+=a[i];
			a1[++cnt1]=a[i];
			c1[cnt1]=c[i];
			i++;
			if(a[i]==1){
				cnt++;
				continue;
			}
			cnt++;
			a2[++cnt2]=a[i]-1;
			c2[cnt2]=c[i];
		}
		else if(cnt<sum/2&&cnt+a[i]>sum/2&&flag==0){
			a1[++cnt1]=sum/2-cnt;
			c1[cnt1]=c[i];
			a2[++cnt2]=a[i]-a1[cnt1];
			c2[cnt2]=c[i];
			cnt+=a[i];
		}
		else if(cnt<sum/2&&cnt+a[i]>sum/2&&flag==1){
			a1[++cnt1]=sum/2-cnt;
			c1[cnt1]=c[i];
			if(a[i]-a1[cnt1]-1==0){
				cnt+=a[i];
				continue;
			}
			a2[++cnt2]=a[i]-a1[cnt1]-1;
			c2[cnt2]=c[i];
			cnt+=a[i];
		}
		else{
			a2[++cnt2]=a[i];
			c2[cnt2]=c[i];
		}
	}
	//for(int i=1;i<=cnt1;i++) cout<<a1[i]<<" "<<c1[i]<<'\n';
	//for(int i=1;i<=cnt2;i++) cout<<a2[i]<<" "<<c2[i]<<'\n';
	int i=1,j=cnt2,ans=0;
	while(i<=cnt1&&j>=1){
		if(a1[i]>a2[j]){
			if(c1[i]!=c2[j]) ans+=a2[j];
			a1[i]-=a2[j];
			a2[j]=0;
			j--;
		}
		else if(a1[i]==a2[j]){
			if(c1[i]!=c2[j]) ans+=a1[i];
			a1[i]=a2[j]=0;
			i++;j--;
		}
		else{
			if(c1[i]!=c2[j]) ans+=a1[i];
			a2[j]-=a1[i];
			a1[i]=0;
			i++;
		}
	}
	cout<<ans;
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
string s;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	//cout<<s<<'\n';
	int cnt=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			//cout<<s[i]<<' '<<s[s.size()-i-1]<<'\n';
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}*/