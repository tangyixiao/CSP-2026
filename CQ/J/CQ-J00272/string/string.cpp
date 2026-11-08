#include<bits/stdc++.h> 
using namespace std;
long long n,x=1,sum,a[200005],sum2;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=1;i<=n/2;i++){
		if(c[i]==c[n-i+1]){
			if(a[i]>=a[n-i+1]){
				
				if(c[i+1]!=c[i]){
					sum2+=abs(a[i]-a[n-i+1]);
					a[i+1]-=abs(a[i]-a[n-i+1]);
				}
				
			}else{
				if(c[i+1]!=c[i]){
					sum2+=abs(a[i]-a[n-i+1]);
				a[n-i]-=abs(a[i]-a[n-i+1]);
				}
				
			}
			
		}else{
			if(a[i]>=a[n-i+1]){
				sum2+=abs(a[i]-a[n-i+1])+min(a[i],a[n-i+1]);
				a[n-i]-=abs(a[i]-a[n-i+1]);
			}else{
				sum2+=abs(a[i]-a[n-i+1])+min(a[i],a[n-i+1]);
				a[i+1]-=abs(a[i]-a[n-i+1]);
			}
		}
	}
	
	cout<<sum2;
	return 0;
}
/*/
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
/*/
