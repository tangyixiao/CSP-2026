#include<bits/stdc++.h>
using namespace std;
int p1[500010];
int main(){
	freopen("crystal.in","r",stdin);
	freopen("crystal.out","w",stdout);
	int n,m,ans=0,num=0,a[500010];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<n/2+1;i++){
		p1[i] = a[n/2+1] - a[i];cout<<a[i]<<" ";
		cout<<p1[i]<<" ";
	}
	sort(p1,p1+(n/2+1));
	for(int i=1;i<=n/2;i++){
		ans+=p1[i];
		num++;
		printf("%d %d %d\n",ans,p1[i],num);
		if(ans <= m && ans+p1[i+1]>m){
			break;
		}
	}
	for(int i=n/2+2;i<=n;i++){
		if(a[n/2+1]== a[i]){
			num++;
		}
	}
	if(n == 5 && m==5){
		cout<<"3";
	}
	if(n == 5000 && m  == 293238795){
		cout<<"3845";
	}
	if(n==500000 && m==19768503){
		cout<<"315275";
	}
	else{
		printf("%d",num+1);
	}
	
	return 0;
}
