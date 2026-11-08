#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
#define int long long
int a[MAXN];
int tmp[MAXN];
char c[MAXN];
int n;
int ans=0;
int l=0,r=0;
bool check(int x){
	for(int i=1;i<=n;i++){
		tmp[i]=a[i];
	}
	int s=1,t=n;
	while(s<t){
//		//cout<<"l r"<<s<<" "<<t<<"\n";
		if(c[s]==c[t]){
			//cout<<"A";
			if(tmp[s]<tmp[t]){
				tmp[t]-=tmp[s];
				s++;
			}
			else if(tmp[s]==tmp[t]){
				s++;
				t--;
			}
			else{
				tmp[s]-=tmp[t];
				t--;
			}
		}
		else{
//			//cout<<"B";
			x-=min(tmp[s],tmp[t]);
//			//cout<<tmp[s]<<" "<<tmp[t]<<"\n";
			if(tmp[s]<tmp[t]){
//				//cout<<1<<"\n";
				tmp[t]-=tmp[s];
				s++;
			} 
			else if(tmp[s]==tmp[t]){
				//cout<<2<<"\n";
				s++;
				t--;
			}
			else{
				//cout<<3<<"\n";
				tmp[s]-=tmp[t];
				t--;
			} 
			//cout<<tmp[s]<<" "<<tmp[t]<<"\n";
		}
		//cout<<"\n";
	}
	return x>=0;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		r+=a[i];
	}
	while(l<r){
		int mid=(l+r)/2;
		//cout<<"mid"<<mid<<"\n"<<check(mid)<<"\n";
		if(check(mid)){
			ans=mid;
			r=mid;	
		}
		else{
			l=mid+1;
		}
	}
	printf("%lld",ans);
}
