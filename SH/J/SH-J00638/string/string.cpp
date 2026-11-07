#include<bits/stdc++.h>
using namespace std;
long long ans,len,cnt1,cnt2,sum,a[200005];
int n,i,j;
string s=" ";
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cout.tie(0); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		s+=c;
		len+=a[i];
	}
	i=1,j=n+1;
	while(i<j){
		if(cnt2>=a[i]){
			if(s[i]!=s[j]) ans+=a[i];
			cnt2-=a[i];
		}else{
			if(s[i]!=s[j]) ans+=cnt2;
			sum=0;
			while(1){
				j--;
				sum+=a[j];
				if(sum>=a[i]-cnt2) break;
				if(s[i]!=s[j]) ans+=a[j];
			}
			if(s[i]!=s[j]) ans+=a[i]-cnt2-(sum-a[j]);
			cnt2=sum-(a[i]-cnt2); 
		}
		i++;
	}
	cout<<ans<<"\n";
	return 0;
}  
