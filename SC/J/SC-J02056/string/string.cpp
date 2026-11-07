#include <bits/stdc++.h>
using namespace std;
struct node{
	long long num;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0,ans=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c; 
		cnt+=a[i].num;
	}
	if(cnt/2==0){
		long long l=1,r=cnt,mid=cnt/2,p=1,q=n;
		while(l<=mid&&r>mid&&p!=q){
			if(a[p].num<a[q].num){
				if(a[p].c!=a[q].c){
					ans+=a[p].num;
				}
				l+=a[p].num;
				r-=a[p].num;
				a[q].num-=a[p].num;
				p++;
			}else if(a[p].num>a[q].num){
				if(a[p].c!=a[q].c){
					ans+=a[q].num;
				}
				l+=a[q].num;
				r-=a[q].num;
				a[p].num-=a[q].num;
				q--;
			}else{
				if(a[p].c!=a[q].c){
					ans+=a[q].num;
				}
				p++;
				q--;		
			}
		}
	}else{
		long long l=1,r=cnt,mid=cnt/2,p=1,q=n;
		while(l<mid&&r-1>mid&&p!=q){
			if(a[p].num<a[q].num){
				if(a[p].c!=a[q].c){
					ans+=a[p].num;
				}
				l+=a[p].num;
				r-=a[p].num;
				a[q].num-=a[p].num;
				p++;
			}else if(a[p].num>a[q].num){
				if(a[p].c!=a[q].c){
					ans+=a[q].num;
				}
				l+=a[q].num;
				r-=a[q].num;
				a[p].num-=a[q].num;
				q--;
			}else{
				if(a[p].c!=a[q].c){
					ans+=a[q].num;
				}
				p++;
				q--;		
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 