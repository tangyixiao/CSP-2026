#include<bits/stdc++.h>
using namespace std;
long long int n,m,a[200001];
long long int visit_go[21],ans=0;
void go(long long int i,long long int j){
	if(i==n+1){
		if(j==m){
			long long int s=visit_go[1];
			for(long long int k=2;k<=m;k++)
				s&=visit_go[k];
			ans=max(ans,s);
		}
	}else{
		if(j<=m-1){
			visit_go[j+1]=a[i];
			go(i+1,j+1);
			visit_go[j+1]=0;
		}
		go(i+1,j);
	}
	return;
}
void subtask1(){
	ans=0;
	go(1,0);
	cout<<ans;
	return;
}
void subtask2(){
	ans=0;
	for(long long int i=1;i<=n;i++) ans=max(ans,a[i]);
	cout<<ans;
	return;
}
void subtask3(){
	ans=0;
	for(long long int i=1;i<=n;i++)
		for(long long int j=i+1;j<=n;j++){
			long long int s=a[i]&a[j];
			ans=max(ans,s);
		}
	cout<<ans;
	return;
}
void subtask4(){
	ans=a[1];
	for(long long int i=2;i<=n;i++) ans&=a[i];
	cout<<ans; 
	return;
}
void subtask5(){
	long long int s1=0,s2=0;
	for(long long int i=1;i<=n;i++){
		if(a[i]==1||a[i]==3) s1++;
		if(a[i]==2||a[i]==3) s2++;
	}
	long long int flag1=0,flag2=0;
	if(s1>=m) flag1=1;
	if(s2>=m) flag2=1;
	if(flag2==1) cout<<2<<endl;
	else if(flag1==1) cout<<1<<endl;
	else cout<<0<<endl;
	return;
}
void subtask6(){
	if(m==1) cout<<n-1;
	else{
		long long int x=n/2+(n-1)%2;
		if(m<=x) cout<<1;
		else cout<<0;
	}
	return;
}
void subtask_0(){
	cout<<0;
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(false),cout.tie(false);
	cin>>n>>m;
	for(long long int i=1;i<=n;i++) cin>>a[i];
	if(n<=20) subtask1();
	else if(n<=2000){
		if(m==1) subtask2();
		else if(m==2) subtask3();
		else if(m==n) subtask4();
		else subtask_0();
	}else{
		long long int flag1=1,flag2=1;
		for(long long int i=1;i<=n;i++){
			if(a[i]>=4) flag1=0;
			if(a[i]!=i-1) flag2=0;
		}
		if(m==1) subtask2();
		else if(m==n) subtask4();
		if(flag1==1) subtask5();
		else if(flag2==0) subtask6();
		else subtask_0();
	}
	return 0;
}