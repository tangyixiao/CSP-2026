#include<bits/stdc++.h>
using namespace std;
struct node{
	long long sum;
	char x;
}a[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long o;
	char s;
	int idx=0;
	long long ans=0;
	for(int i=1;i<=n;i++){
		cin>>o;
		cin>>s;
		if(s==a[idx].x){
			a[idx].sum+=o;
		}else{
			a[++idx].x=s;
			a[idx].sum+=o;
		}
		ans+=o;
	}
	/*for(int i=1;i<=idx;i++){
		cout<<a[i].sum<<" "<<a[i].x<<endl;
	}*/
	ans=ans/2;
	int l=1,r=idx;
	long long sum1=0,sum2=0;
	long long cnt=0;
	while(sum1<=ans&&sum2<=ans){
		if(a[l].sum<a[r].sum){
			if(sum1+a[l].sum>ans||sum2+a[l].sum>ans) break;
			sum1+=a[l].sum;
			sum2+=a[l].sum;
			if(a[l].x!=a[r].x){
				cnt+=a[l].sum;
			}
			a[r].sum-=a[l].sum;
			l++;
		}else if(a[l].sum>a[r].sum){
			if(sum1+a[r].sum>ans||sum2+a[r].sum>ans) break;
			sum1+=a[r].sum;
			sum2+=a[r].sum;
			if(a[l].x!=a[r].x){
				cnt+=a[r].sum;
			}
			a[l].sum-=a[r].sum;
			r--;
		}else if(a[l].sum==a[r].sum){
			if(sum1+a[l].sum>ans||sum2+a[l].sum>ans) break;
			sum1+=a[l].sum;
			sum2+=a[r].sum;
			if(a[l].x!=a[r].x){
				cnt+=a[l].sum;
			}
			a[l].sum=0;
			a[r].sum=0;
			l++;
			r--;
		}
		//cout<<l<<" "<<r<<" "<<sum1<<" "<<sum2<<endl;
	}
	//cout<<l<<" "<<r<<" "<<sum1<<" "<<sum2<<endl;
	if(a[l].x!=a[r].x){
		cnt=cnt+(ans-sum1);
	}
	cout<<cnt;
	return 0;
}
