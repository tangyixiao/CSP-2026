#include<bits/stdc++.h>
#define int long long 
using namespace std;
int s[200010];
char c[200010];
int n,sum;
void f(int k){
	int num=0;
	for(int i=1;i<=n;i++){
		num+=s[i];
		if(num>=k){
			int q=k-num+s[i]-1;
			s[i]=num-k;
			char c_q=c[i];
			if(q>0){
				for(int j=n;j>=i;j--){
					int v=s[j];
					char v_c=c[j];
					s[j+1]=v,c[j+1]=v_c;
				}
				s[i]=q,c[i]=c_q;
				n++;
			} 
			break;
		}
	}
	return;
} 
void solve(){
	int l=1,r=n,ans=0;
	while(l<r){
		if(s[l]>s[r]) s[l]-=s[r],ans+=((c[l]==c[r])?0:s[r]),r--;
		if(s[l]<s[r]) s[r]-=s[l],ans+=((c[l]==c[r])?0:s[l]),l++;
		if(s[l]==s[r]) l++,r--,ans+=((c[l]==c[r])?0:s[l]);
	}
	cout<<ans;
	return;
}

signed main(){	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int sum=0; cin>>n;
	bool O_k=0;
	for(int i=1;i<=n;i++) cin>>s[i]>>c[i],sum+=s[i],O_k=(s[i]<=1e9?0:1);
	//c
	if(sum%2==1){
		f(sum/2+1);
		//for(int i=1;i<=n;i++) cout<<s[i]<<' '<<c[i]<<'\n';
		solve();
	} else{
		f(sum/2),f(sum/2+1);
		solve();
	}
//	cout<<"\n"<<sum;
	return 0;
}