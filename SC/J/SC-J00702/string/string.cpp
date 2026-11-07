#include<bits/stdc++.h>
using namespace std;
const int N=6e5+10;
long long n,idx,x;
struct Node{
	char id;
	long long len;
}a[N];
char c;
long long ans; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>x>>c;
		if(c==a[idx].id){
			a[idx].len+=x;
		}else{
			idx++;
			a[idx].id=c;
			a[idx].len=x;
		}
	}
	x=1;
	while(x!=idx){
		if(a[x].id==a[idx].id){
			if(a[x].len<a[idx].len){
				a[idx].len-=a[x].len;
				x+=1;
			}else if(a[x].len>a[idx].len){
				a[x].len-=a[idx].len;
				idx-=1;
			}else if(a[idx].len==a[x].len){
				a[idx].len=0;
				x+=1;
			}
		}if(a[x].id!=a[idx].id){
			if(a[x].len<a[idx].len){
				ans+=a[x].len;
				a[idx].len-=a[x].len;
				x+=1;
			}else if(a[x].len>a[idx].len){
				ans+=a[idx].len;
				a[x].len-=a[idx].len;
				idx-=1;
			}else if(a[idx].len==a[x].len){
				ans+=a[idx].len;
				a[idx].len=0;
				x+=1;
			}
		}
	}
	cout<<ans;
	return 0;
} 