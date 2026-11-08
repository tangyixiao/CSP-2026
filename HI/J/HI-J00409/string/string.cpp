#include<bits/stdc++.h>
using namespace std;
int n,a[200005],r=0,l=1;
char s[200005];
unsigned long long rr=0,ll=0,ans=0;
int main(){
	freopen("r","string.in",stdin);
	freopen("w","string.out",stdout);
	cin>>n;
	//cout<<"hellowword"<<n<<endl;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&s[i]);
		//cin>>a[i]>>s[i];
		rr+=a[i];
	}
	r=n;
	//cout<<ll<<' '<<rr<<endl;
	while(rr>ll && r!=l){
		//cout<<l<<' '<<r<<' '<<s[l]<<' '<<a[l]<<' '<<s[r]<<' '<<a[r]<<' '<<ll<<' '<<rr<<' '<<ans<<endl;
		if(s[r]!=s[l]){
			ans+=min(a[l],a[r]);
		}if(a[l]>a[r]){
			a[l]-=a[r];
			ll+=a[r];
			rr-=a[r];
			r--;
			
		}else if(a[l]<a[r]){
			a[r]-=a[l];
			ll+=a[l];
			rr-=a[l];
			l++;
			
		}else{
			r--;
			l++;
			ll+=a[r];
			rr-=a[l];
		}
		
	}
	//cout<<l<<' '<<r<<' '<<s[l]<<' '<<a[l]<<' '<<s[r]<<' '<<a[r]<<' '<<ll<<' '<<rr<<endl;
	cout<<ans;
	return 0;
}/*6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b*/


