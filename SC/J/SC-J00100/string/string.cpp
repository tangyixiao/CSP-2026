#include<bits/stdc++.h>
using namespace std;
long long n,num1=0,m=1,ans1=0;
long long a[200005],s1[200005];
string c1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c1;
		s1[i]+=(int)c1[0]-'A'+1;
	}
	num1=a[n];
	while(m<=n){
		//cout<<num1<<endl;
		if(num1<0){
			if(s1[m]==s1[n]){
				if(0-num1==a[n]){
					n--;
					num1=a[n];
					continue;
				}
				else if(0-num1>a[n]){
					num1+=a[n];
					n--;
					continue;
				}else {
					num1=a[n]+num1;
					m++;
					continue;
				}
			}else {
				if(0-num1==a[n]){
					ans1+=a[n];
					n--;
					num1=a[n];
					continue;
				}
				else if(0-num1>a[n]){
					ans1+=a[n];
					num1+=a[n];
					n--;
					continue;
				}else {
					ans1+=0-num1;
					num1=a[n]+num1;
					m++;
					continue;
				}
			}	
		}
		if(num1>=0){
			if(s1[m]==s1[n]){
				if(num1==a[m]){
					n--;
					num1=a[m];
					m++;
					continue;
				}
				else if(num1>a[m]){
					num1-=a[m];
					m++;
					continue;
				}else {
					num1=num1-a[m];
					n--;
					continue;
				}
			}else {
				if(num1==a[m]){
					ans1+=a[m];
					n--;
					num1=a[m];
					m++;
					continue;
				}
				else if(num1>a[m]){
					ans1+=a[m];
					num1+=a[m];
					m++;
					continue;
				}else {
					ans1+=num1;
					num1=num1-a[m];
					n--;
					continue;
				}
			}	
		}
	}
	cout<<ans1;
	return 0;
}