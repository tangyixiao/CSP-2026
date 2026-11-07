#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[200005],mx=-999,sum=0;

//jg=前面的结果  mx=历史最大  sl=还有多少数字没选  xz=要选择哪一项 
long long dg(long long jg,long long &mx,long long sl,long long xz){
	if(sl==1){
		jg &= a[xz];
		if(jg>mx){
			mx=jg;
			return mx;
		}
	}
	//int gc=jg;//gc是刚才jg的值 
	jg &= a[xz];
	dg(jg,mx,sl-1,xz+1);
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//先处理容易的特殊情况 
	if(m==n){
		sum=a[1];
		for(int i=2;i<=n;i++){
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>mx){
				mx=a[i];
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n-1;i++){
			sum=a[i]&a[i+1];
			if(sum>mx){
				mx=sum;
			}
		}
		cout<<mx;
		return 0;
	}
	//开始处理不特殊情况（用递归）
	dg(a[1],mx,m,2);
	if(mx==0){
		cout<<1;
		return 0;
	}
	cout<<mx;
	return 0;
}
