#include <iostream>
using namespace std;
const int N=2e5+10;
int n;
long long a1[N],a2[N];
int kd1[N],kd2[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long md=0;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a1[i]>>c;
		kd1[i]=c-'a'+1;
		a2[n-i+1]=a1[i];
		kd2[n-i+1]=kd1[i];
		md+=a1[i];
	}
	md/=2;
	long long sum1=0,sum2=0;
	int id1=0,id2=0;
	long long ans=0;
	while(sum1<md || sum2<md){
		if(sum1==sum2){
			id1++,id2++;
			long long sm1=sum1,sm2=sum2;
			sum1+=a1[id1],sum2+=a2[id2];
			if(sum1>md) sum1=md;
			if(sum2>md) sum2=md; 
			if(kd1[id1]!=kd2[id2]){
				ans+=min(sum1-sm1,sum2-sm2);
			}
		}else if(sum1<sum2){
			id1++;
			long long sm1=sum1;
			sum1+=a1[id1];
			if(sum1>md) sum1=md;
			if(kd1[id1]!=kd2[id2]){
				ans+=min(sum1,sum2)-sm1;
			}
		}else{ //sum2<sum1;
			id2++;
			long long sm2=sum2;
			sum2+=a2[id2];
			if(sum2>md) sum2=md;
			if(kd2[id2]!=kd1[id1]){
				ans+=min(sum2,sum1)-sm2;
			} 
		}
	}
	cout<<ans; 
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

Trick||Treat!
*/
