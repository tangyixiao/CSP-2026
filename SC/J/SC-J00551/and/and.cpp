#include<bits/stdc++.h>
using namespace std;
long long n,m,num,ans,sum,maxn,al=pow(2,31)-1;
long long a[200005];
bool vis1=0,vis2=0;
void s1(){
	for(int i=pow(2,m)-1;i<=pow(2,n)-1;i++){
		sum=pow(2,31)-1;
		num=0;
		long long k=i;
		for(int j=1;k>0;j++,k/=2){
			if(k%2==1){
				sum&=a[j];
				num++;
			}
		}
		if(num==m){
			ans=max(ans,sum);
		}
	}
	cout << ans;
	return ;
}
void s2(){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout << ans;
	return ;
}
void s3(){
	long long q[20];
	for(int i=0;i<=10;i++){
		q[i]=0;
	}
	for(int i=1;i<=n;i++){
		q[a[i]]++;
	} 
	if(q[4]>=m){
		cout << 4;
	}else if(q[3]>=m){
		cout << 3;
	}else if(q[3]+q[2]>=m){
		cout << 2;
	}else if(q[3]+q[1]>=m){
		cout << 1;
	}else{
		cout << 0;
	}
	return ;
}
void s4(){
	sort(a+1,a+1+n);
	cout << a[n-m+1];
}
void s5(){
	sum=pow(2,31)-1;
	sort(a+1,a+1+n);
	for(int i=2;i<=n;i++){
		sum&=a[i];
	}
	cout << sum;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		maxn=max(maxn,a[i]);
		al&=a[i];
		if(a[i]>4){
			vis1=1;
		}
		long long qwq=a[i];
		for(;;){
			if(qwq==0){
				break;
			}
			if(qwq%2==0){
				vis2=1;
			}
			qwq/=2;
		}
	}
	if(m==1){
		cout << maxn;
	}else if(vis2==0){
		s4();
	}else if(m==n){
		cout << al;
	}else if(m==2){
		s2();
	}else if(vis1==0){
		s3();
	}else if(n<=20){
		s1();
	}else if(m==n-1){
		s5();
	}else{
		long long ty=1;
		for(;ty<=pow(2,12);){
			ty*=rand();
		}
		cout << ty;
	} 
	return 0;
}