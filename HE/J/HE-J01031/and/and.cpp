#include<bits/stdc++.h>
using namespace std;
int n,m,f=1;
long long a[200010],er[40],maxx,ann,mm,mmm,mmmm,ans;
void dfs(int i,int num,long long sum){
	
	if(i>n+1) return;
	//cout<<sum<<" "<<num<<endl;
	if(num==m){
		mm=max(mm,sum);
		return;
	}
	else{
		dfs(i+1,num+1,sum&a[i]);
		dfs(i+1,num,sum);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	er[0]=1;
	for(int i=1;i<=35;i++){
		er[i]=er[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int f1=0;
		for(int j=0;j<=30;j++){
			if(a[i]==er[j]){
				f1=1;
				break;
			}
		}
		if(f1==0) f=0;
		if(i==1) ann=a[i];
		else ann&=a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		cout<<ann;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				mmm=max(mmm,a[i]&a[j]);
			}
		}
		cout<<mmm;
		return 0;
	}
	if(f==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(n<=20){
		dfs(1,0,er[30]-1);
		cout<<mm;
		return 0;
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=n-m+1;i--){
		if(i==n) ans=a[n];
		else ans&=a[i];
	}
	cout<<ans;
	return 0;
}
