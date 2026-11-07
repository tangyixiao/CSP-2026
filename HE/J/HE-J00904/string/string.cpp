#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long read(){
	long long k=0LL;
	char c=getchar();
	while(c>'9'||c<'0')c=getchar();
	while(c<='9'&&c>='0'){
		k=k*10LL+c-'0';
		c=getchar();
	}
	return k;
}
long long a[N],ans,sum,sum1,sum2,sum3;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l,r;cin>>n;l=1;
	for(int i=1;i<=n;i++){
		a[i]=read();c[i]=getchar();
		while(c[i]>'z'||c[i]<'a')c[i]=getchar();
		sum+=a[i];
	}sum1=a[1];sum2=a[n];
	for(int i=1;i<=n;i++){
		sum3+=a[i];
		if(sum-(sum/2*2)==1&&sum3==(sum/2)){
//			cout<<"QWQ";
			for(int j=n;j>=i+2;j--){
					a[j+1]=a[j];
					c[j+1]=c[j];
				}n+=1;
				a[i+2]=a[i+1]-1;
				a[i+1]=1;
				c[i+2]=c[i+1];break;
		}
		if(sum-(sum/2*2)==1&&sum3>=((sum/2)+1)){
			if(a[i]==1&&sum3==((sum/2)+1))break;
			if(sum3==((sum/2)+1)){
//				cout<<"ovo";
				for(int j=n;j>=i+1;j--){
					a[j+1]=a[j];
					c[j+1]=c[j];
				}n+=1;
				a[i+1]=1;a[i]-=1;
				c[i+1]=c[i];
				break;
			}
			else{
//				cout<<"!@!";
				for(int j=n;j>=i+1;j--){
					a[j+2]=a[j];
					c[j+2]=c[j];
				}n+=2;
				a[i+1]=1;
				a[i+2]=sum3-(sum/2+1);
				a[i]=a[i]-(a[i+2]+1);
				c[i+1]=c[i+2]=c[i];break;
			}
		}
		else if(sum-(sum/2*2)==0&&sum3>=(sum/2)){
			if(sum3==(sum/2))break;
			else{
//				cout<<"@#@";
				for(int j=n;j>=i+1;j--){
					a[j+1]=a[j];
					c[j+1]=c[j];
				}n+=1;
				a[i+1]=sum3-(sum/2);
				a[i]=a[i]-a[i+1];
				c[i+1]=c[i];n+=1;break;
			}
		}
	}
//	for(int i=1;i<=n;i++){
//		cout<<i<<" "<<a[i]<<" "<<c[i]<<'\n';
//	}
	sum3=0LL;r=n;
	while(sum-sum3-sum3>1&&l<r){
//		cout<<"begin"<<l<<" "<<r<<" "<<sum3<<'\n';
		if(c[l]==c[r]){
			if(sum1>sum2){
				sum3+=sum2;
				r-=1;sum1-=sum2;sum2=a[r];
			}
			else if(sum1<sum2){
				sum3+=sum1;
				l+=1;sum2-=sum1;sum1=a[l];				
			}
			else{
				sum3+=sum1;
				l+=1;r-=1;
				sum1=a[l];sum2=a[r];
			}
		}
		else{
			if(sum1>sum2){
				sum3+=sum2;
				ans+=sum2;
				r-=1;sum1-=sum2;sum2=a[r];
			}
			else if(sum1<sum2){
				sum3+=sum1;
				ans+=sum1;
				l+=1;sum2-=sum1;sum1=a[l];				
			}
			else{
				sum3+=sum1;
				ans+=sum1;
				l+=1;r-=1;
				sum1=a[l];sum2=a[r];
			}
		}
//		cout<<"end"<<l<<" "<<r<<" "<<sum3<<'\n';
	}
	cout<<ans;
	return 0;
}/*3
2 a
2 b
1 c
*/
/*2
2 a
3 a
*/
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
