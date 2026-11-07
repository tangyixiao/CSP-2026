#include<bits/stdc++.h>
using namespace std;
long long  n,k,m,a[1000200],c[1000200],maxx=-1,answ[30];
long long er(long long N){
	if(N==0){
		return 0;
	}
	if(N==1){
		return 1;
	}
	long long   s[30];
	long long  num=-1,ans=0;
	for(long long i=0;i<30;i++){//将数组归零 
		s[i]=0;
	}
	while(N>0){
		num++;
		s[num]=N%2;
		N/=2;
	}
	for(long long i=num;i>=0;i--){
		ans=ans*10+s[i];
	}
	return ans;
} 
long long an(long long a,long long b){//返回二进制数 
	long long aa[30],bb[30],anss[30];
	long long numa=0,numb=0,num=0;
	for(long long i=0;i<30;i++){//初始化0 
		aa[i]=0;
		bb[i]=0;
		anss[i]=0;
	}
	while(a>0){
		aa[numa]=a%10;
		numa++;
		a/=10;
	}
	while(b>0){//将a,b，存入数组，个位在左 
		bb[numb]=b%10;
		numb++;
		b/=10;
	}
	for(long long i=0;i<max(numa,numb);i++) {
		if(aa[i]==bb[i]){
			anss[i]=aa[i];
		}else{
			anss[i]=0;
		}
	}
	for(long long i=max(numa,numb)-1;i>=0;i--){
		num=num*10+anss[i];
	}
	return num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>m;
	long long ss;
	for(long long i=0;i<n;i++){
		cin>>ss;
		a[i]=er(ss);
	}
//	cout<<an(er(3),er(12));
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<endl;
//	}
	for(long long i=0;i<n-m;i++){
		int summ=a[i];
		for(long long j=i;j<i+m;j++){
			summ=an(summ,a[j]); 
		}
		if(maxx<summ){
			maxx=summ;
		}
	}

/*	int ans=0;
	while(maxx>0){
		ans=ans*2+maxx%2;
		maxx/=2;
	}*/
	long long ans=0;
	while(maxx>0){
		answ[k]=maxx%10;
		k++;
		maxx/=10;
	}
	for(int i=0;i<k+1;i++){
		ans+=ans+answ[i]*pow(2,i);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}



