#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[100005],a1=0,a2=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1){
			a1++;
		}
		if(a[i]==2){
			a2++;
		}
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		if(a[n]==1){
			cout<<n<<" "<<a2;
			return 0;
		}else{
			cout<<a1<<" "<<n;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]=i;	
	}
	for(int i=1;i<=n;i++){
		if(ans[i]!=0){
			cout<<ans[i]<<" ";
		}
	}
	//freopen("card.in","r",stdin); 
	//为啥我的T4样例四解压是乱码 
	//自己的输出也是乱码
	//而且乱码一样
}
