#include<bits/stdc++.h>
using namespace std;
const long long maxn=2e5+10;
struct node{
	char c;
	long long num;
	bool flag;
}a[maxn],s;
int su[maxn];
int main(){
	long long n,ans=0;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)cin>>a[i].num>>a[i].c,su[i]=a[i].num;
	if(n==1){
		cout<<0;
		exit(0);
	}
	if(n==2){
		if(a[1].c==a[2].c){
			cout<<0;
			exit(0);
		}
		cout<<abs(a[1].num-a[2].num);
		exit(0);
	}
	long long i=1,j=n;
	while(i<=j){
		//cout<<"i:"<<i<<" a[i].c:"<<a[i].c<<" a[i].num:"<<a[i].num<<'\n';
		//cout<<"j:"<<j<<" a[j].c:"<<a[j].c<<" a[j].num:"<<a[j].num<<'\n';
		if(a[i].c!=a[j].c){
			if(a[i].num>a[j].num){
				ans+=a[j].num;
				a[i].num-=a[j].num;
				a[j].num=0;
				j--;
			}
			else if(a[i].num==a[j].num){
				ans+=a[i].num;
				a[i].num=0,a[j].num=0;
				i++,j--;
			}
			else if(a[i].num<a[j].num){
				ans+=a[i].num;
				a[j].num-=a[i].num;
				a[i].num=0;
				i++;
			}
		}else if(i!=j){
			if(a[i].num>a[j].num){
				a[i].num-=a[j].num;
				a[j].num=0;
				j--;
			}
			else if(a[i].num==a[j].num){
				a[i].num=0;
				a[j].num=0;
				i++,j--;
			}
			else if(a[i].num<a[j].num){
				a[j].num-=a[i].num;
				a[i].num=0;
				i++;
			}
		}
		if(i==j){
			long long sum1=0,sum2=0;
			for(long long k=1;k<i;k++){
				sum1+=a[k].num;
				sum2+=a[n-k+1].num;
				long long l=sum1;
				sum1-=min(sum1,sum2);
				sum2-=min(l,sum2);
			}
			//cout<<abs(sum1-sum2)<<' '<<su[i]-a[i].num<<'\n';
			if(abs(sum1-sum2)==su[i]-a[i].num)break;
			else{
				ans+=abs(sum1-sum2);
				break;
			}
		}
		//cout<<ans<<'\n';
	}
	cout<<ans;
	return 0;
}
/*freopenÈ¥×¢ÊÍ!!!!!!!!!!!*/
/*Õô£¡*/
/*
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
*/
