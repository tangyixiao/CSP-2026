#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],s;
char b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1,j=n;i<=j;){
		if(b[i]==b[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				a[j]=0;
				j-=1;
			}else if(a[i]==a[j]){
				a[i]=0;
				a[j]=0;
				j-=1;
				i+=1;
			}else{
				a[j]-=a[i];
				a[i]=0;
				i+=1;
			}
		}else{
			if(a[i]>a[j]){
				s=s+a[j];
				a[i]-=a[j];
				a[j]=0;
				j-=1;
			}else if(a[i]==a[j]){
				s=s+a[i];
				a[i]=0;
				a[j]=0;
				i+=1;
				j-=1;
			}else{
				s=s+a[i];
				a[j]-=a[i];
				a[i]=0;
				i+=1;
			}
		}
	}
	printf("%.lld",s);
	return 0;
}
//Trick||Treat!

