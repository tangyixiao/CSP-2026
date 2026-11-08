#include<bits/stdc++.h>
using namespace std;
const int MAXX=2e5+5;
int a[32];
int Liu[MAXX];
int the_sum=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,shuju,testsj=32,nextbig,cf=1,ceng=0;
	//nextbig:上次还剩几个数据 cf:测试用的 
	bool flag=false;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>Liu[i];
		shuju=Liu[i];
		int j=0;
		while(shuju!=0){
			a[j]+=shuju%2;
			j++;
			shuju=shuju/2;
		}
	}
	nextbig=n-1;
	for(int i=31;i>=0;i--){
		if(a[i]>=m){
			testsj=i;
			the_sum=1;
			break;
		}
	}
	if(the_sum==0){
		cout<<0;
		return 0;
	}
	for(int i=testsj-1;i>=0;i--) cf=cf*2;
	for(int i=testsj-1;i>=0;i--){
		the_sum=the_sum*2;
		cf=cf/2;
		if(nextbig+1==m) flag=true;
		if(flag){
			bool flag2=true;
			for(int j=0;j<=nextbig;j++){
				if((a[j]/cf)%2==0){
					flag2=false;
					break;
				}
			}
			if(flag2) the_sum++;
		}
		else{
			int lenn=0;
			for(int j=0;j<=nextbig;j++){
				if((Liu[j]/cf)%2==1){
					lenn++;
				}
			}
			if(lenn>m){
				int lenn2=0;
				for(int j=0;j<=nextbig;j++){
					if((Liu[j]/cf)%2==1){
						Liu[lenn2]=Liu[j];
						lenn2++;
					}
				}
				the_sum++;
				nextbig=lenn-1;
			}
			if(lenn==m){
				flag=true;
				continue;
			}
		}
	}
	cout<<the_sum;
	return 0;
}
