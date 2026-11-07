#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
char fu[20005];
long long s[200005],sum[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>fu[i];
		
	}
	/*sum[1]=s[1];
	for(int i=2;i<=n)sum[i]=s[i]+sum[i-1];*/	
	int q=1,h=n;
	while(h>q){
		if(s[q]>s[h]){
			if(fu[q]!=fu[h]) {
				ans+=s[h];
				s[q]-=s[h];
				h--;
			}
			else {
				s[q]-=s[h];
				h--;	
			}
		}
		else if(s[q]<s[h]){
			if(fu[q]!=fu[h]) {
				ans+=s[q];
				s[h]-=s[q];
				q++;
			}
			else {
				s[h]-=s[q];
				q++;	
			}
		}
		else{
			if(fu[q]!=fu[h]) {
				ans+=s[q];
				q++;
				h--;
			}
			else {
				q++;
				h--;	
			}
		}
	}
	cout<<ans;
	return 0;
}