#include <bits/stdc++.h>
using namespace std;
const long long N=200005;
struct aa{
	long long len;
	char ch;
}a[N];
long long n,lsum=0,sum=0,b;
long long cnt=1,f=0;
long long ans=0,id=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
//	cout<<"sdfsdf";
	for(long long i=1;i<=n;i++){
		cin>>a[i].len>>a[i].ch;
		lsum+=a[i].len;
	}
	for(long long i=1;i<=n;i++){
//		cout<<sum<<"\n";
		if(sum+a[i].len>=(lsum+1)/2){
//			cout<<i<<"\n";
			sum+=a[i].len;
			if(f==0){
				id=i;
				a[i].len-=(lsum%2);
				b=sum-((lsum+1)/2);
				if(a[i].len>=b*2){
					a[i].len-=b*2;
					cnt=0;
				}else{
					b-=(a[i].len-b);
//					cout<<b;
					while(b!=0){
						if(b>=a[id-cnt].len){
							if(a[id-cnt].ch!=a[i].ch){
								ans+=a[id-cnt].len;
							}
							b-=a[id-cnt].len;
							a[id-cnt].len=0;
							cnt++;
						}else{
							if(a[id-cnt].ch!=a[i].ch){
								ans+=b;
							}
							a[id-cnt].len-=b;
							b=0;
						}
					}
				}
			}else{
				b=a[i].len;
				while(b!=0){
						if(b>=a[id-cnt].len){
							if(a[id-cnt].ch!=a[i].ch){
								ans+=a[id-cnt].len;
							}
							b-=a[id-cnt].len;
							a[id-cnt].len=0;
							cnt++;
						}else{
							if(a[id-cnt].ch!=a[i].ch){
								ans+=b;
							}
							a[id-cnt].len-=b;
							b=0;
						}
					}
			}
			f=1;
		}else{
			sum+=a[i].len;
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
*/
