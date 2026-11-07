#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
using LL=long long;
LL n,m,a[N],cnt[N];
bool flag[N];
string s[N],ss[N];
void zh(LL x,int i){
	string y="";
	if(x==0) y="0";
	while(x){
		LL mod=x%2;
		y=char(mod+'0')+y;
		x/=2;
	}
	s[i]=y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	LL mlen=0,mm=2e18;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		zh(a[i],i);
		mlen=max(mlen,LL(s[i].length()));
	}
	for(int i=1;i<=n;i++){
		for(int j=s[i].length();j<mlen;j++){
			s[i]="0"+s[i];
		}
	}
	for(int i=0;i<mlen;i++){
		for(int j=1;j<=n;j++){
			if(s[j][i]=='1')cnt[i]++;
		}
		if(cnt[i]>=m){
			mm=i;
			break;
		}
	}
	LL ans=0,i=1;
	for(int j=1;j<=n;j++){
		if(s[j][mm]=='1'){
			ss[i]=s[j];
			i++;
			flag[i]=1;
		}
		//cout<<ans<<"\n";
	}
	for(int ii=mm+1;ii<=mlen;ii++){
		
		LL cntt=0;
		for(int j=1;j<=i;j++){
			if(!flag[j])continue;
			if(ss[j][ii]=='1')cntt++;
		}
		if(cntt>=m){
			for(int j=1;j<=i;j++){
				if(ss[j][ii]=='0')flag[j]=0;
			}
		}
	}
		
	for(int j=1;j<=cnt[mm];j++){
		if(ss[j][mm]=='1'&&flag[j]){
			if(ans==0){
				for(int ii=1;ii<=n;ii++){
					if(s[ii]==ss[j]){
					    ans=a[ii];
						break;	
					} 
				}
			} 
			//cout<<a[j]<<"\n";
			else {
				for(int ii=1;ii<=n;ii++){
					if(s[ii]==ss[j]){
					    ans=LL(a[ii]&ans);
						break;
					} 
				}
			}
		}
			
		//cout<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}
