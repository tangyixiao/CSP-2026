#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	unsigned int a[n+3]={0};
	//scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	std::sort(a,a+n);
	if(m==1){
		cout << a[n-1];
		return 0;
	}
	if(m==2){
		unsigned int ans=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if((unsigned int)(a[i] & a[j])>ans){
					ans=a[i] & a[j];
				}
			}
		}
		cout << ans;
		return 0;
	}
	unsigned int max_ans=0,tmp=0;
	do{
		if(tmp==a[m]){
			continue;
		}
		tmp=a[m];
	 	unsigned int ans=-1;
		for(int i=0;i<m;i++){
			ans &=a[i];
		}
		if(ans>max_ans){
			max_ans=ans;
		}
	}while(std::next_permutation(a,a+n));
	cout << max_ans;
	
}