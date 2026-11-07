#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],sum,sum1,sum2,s,d,p,l,ans,b,gcd;
char c[200010];
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		//sum+=a[i];
		if(i==1)gcd=a[i];
		gcd=__gcd(gcd,a[i]);
		//cout<<"[+]读入\n";
	}
//	if(sum%2==0)s=sum/2;
//	else s=sum/2+1;
//	for(int i=1;i<=n;i++){
//		sum1+=a[i];
//		if(sum1>=s){
//			a[i]-=sum1-s;
//			for(int j=n;j>i;j--){
//				a[j+1]=a[j];
//				c[j+1]=c[j];
//			}
//			a[i+1]=sum1-s;
//			c[i+1]=c[i];
//			sum1=0;
//			d=i;
//			n++;
//			//cout<<"[=]找到中点："<<d<<endl;
//			break;
//		}
//	}
//	cout<<"a[]={";
//	for(int i=1;i<n;i++){
//		cout<<a[i]<<",";
//	}
//	cout<<a[n]<<"}\nc[]={";
//	for(int i=1;i<n;i++){
//		cout<<c[i]<<",";
//	}
//	cout<<c[n]<<"}\n";
	//if(sum%2==1)a[d]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i]/gcd;j++){
			str+=c[i];
		}
	}
	for(int i=0;i<str.size()/2;i++){
		if(str[i]!=str[str.size()-i-1])ans++;
	}
//	for(int i=n;i>d+1;i--){
//		sum1+=a[i];
//		//cout<<"[+]比对 i="<<i<<" a[i]="<<a[i]<<" c[i]="<<c[i]<<" 与：\n";
//		if(sum1>=sum2){
//			if(c[l]!=c[i])ans+=a[i];
//			continue;
//		}
//		while(sum1>sum2){
//			if(sum1<=a[l+1]+sum2){
//				b=sum2;
//			}
//			sum2+=a[++l];
//			if(c[l]!=c[i]&&sum1>sum2)ans+=a[l];
//			//cout<<"[-]i="<<l<<" a[i]="<<a[l]<<" c[i]="<<c[l]<<"\n";
//		}
//		ans+=sum1-b;
//		//cout<<"[=]比对完成\n[A]ans="<<ans<<endl;;
////		a[l]-=sum2-sum1;
////		if(c[l]!=c[i])ans+=a[i];
////		if(a[l]>a[i]){
////			a[l]-=a[i];
////			ans+=a[i];
////		}
//	}
	cout<<ans*gcd;
	return 0;
}