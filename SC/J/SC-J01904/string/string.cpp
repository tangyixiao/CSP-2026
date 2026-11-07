#include<bits/extc++.h>
#define int long long
using namespace std;
using namespace __gnu_pbds;

int n,a[200001],ans;
char c[200001];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a[i]+=a[i-1];
	}int mid=a[n]/2+a[n]%2,ln,rn,li,ri;
	if(a[n]%2==1){
		for(int i=1;i<=n;i++){
			if(a[i]>=mid){
				ln=mid-a[i-1]-1;
				li=ri=i;
				rn=a[i]-mid;
				if(ln<=0){
					if(i==1){
						cout<<0;
						return 0;
					}ln=a[i-1]-a[i-2];
					li=i-1;
				}if(rn<=0){
					if(i==n){
						cout<<0;
						return 0;
					}rn=a[i+1]-a[i];
					ri=i+1;
				}break;
			}
		}
	}if(a[n]%2==0){
		for(int i=1;i<=n;i++){
			if(a[i]>=mid){
				ln=mid-a[i-1];
				li=ri=i;
				rn=a[i]-mid;
				if(ln<=0){
					if(i==1){
						cout<<0;
						return 0;
					}ln=a[i-1]-a[i-2];
					li=i-1;
				}if(rn<=0){
					if(i==n){
						cout<<0;
						return 0;
					}rn=a[i+1]-a[i];
					ri=i+1;
				}break;
			}
		}
	}while(!(li==0||ri==n+1)){
		if(c[li]==c[ri]){
			int jian=min(ln,rn);
			ln-=jian;
			rn-=jian;
			if(ln==0){
				if(li==1){
					li=0;
				}else{
					ln=a[li-1]-a[li-2];
					li--;
				}
			}if(rn==0){
				if(ri==n){
					ri=n+1;
				}else{
					rn=a[ri+1]-a[ri];
					ri++;
				}
			}
		}else{
			int jian=min(ln,rn);
			ans+=jian;
			ln-=jian;
			rn-=jian;
			if(ln==0){
				if(li==1){
					li=0;
				}else{
					ln=a[li-1]-a[li-2];
					li--;
				}
			}if(rn==0){
				if(ri==n){
					ri=n+1;
				}else{
					rn=a[ri+1]-a[ri];
					ri++;
				}
			}
		}
	}cout<<ans;
}