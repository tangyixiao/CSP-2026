#include<bits/stdc++.h>
using namespace std;
struct duan{
	char zi;
	int shu;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].shu;
		cin>>a[i].zi;
	}

	int tail=n,head=1;
	long long sum=0;
	while(tail>=head){
		
		if(a[tail].zi!=a[head].zi){
			sum+=min(a[tail].shu,a[head].shu);	
		}
		if(a[tail].shu>a[head].shu){
			head++;
			a[tail].shu-=a[head+1].shu;
		}else if(a[tail].shu<a[head].shu){
			tail--;
			a[head].shu-=a[tail+1].shu;
		}else{
			head++;
			tail--;
		}
	}cout<<sum;
}

