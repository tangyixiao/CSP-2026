#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll ans=1;
ll a[200005];
char c[200005];
ll cnt[200005];
char x;
ll z;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
//    cout<<n; 
    for(int i=1;i<=n;i++){
//    	cout<<i;
    	cin>>a[i];
    	cin>>c[i];
    	if(i!=1&&c[i]!=c[i-1]){
    		ans++;
		}
		cnt[ans]+=a[i];
	}
	
	if(ans==1){
		cout<<0<<endl;
		return 0;
	}
	if(ans==2){
		cout<<min(cnt[1],cnt[2]);
		return 0;
	}
//	for(int i=1;i<=ans;i++){
//		sum[i]=sum[i-1]+cnt[i];
//	}
	for(int i=1;i<=sqrt(ans);i++){
		if(cnt[i]<cnt[ans-i+1]){
		z+=cnt[ans-i+1];
//			cnt[ans-i]+=cnt[ans-i+1]-cnt[i];
	}else{
		z+=cnt[i];
//			cnt[i+1]+=cnt[i]-cnt[ans-i+1];	
			
	}
	}
	cout<<z;
//	sort(cnt+1,cnt+ans+1);
//	for(int i=1;i<=ans;i++){
//		if(cnt[i]%2==0){
//			
//		}
//	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
