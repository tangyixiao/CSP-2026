#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
long long le,mid,cnt,cnt0[30],cnt1[30],ans,res;
struct d{
	int len,id;
	char x;
}a[N];
d l,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].x;
		le=(long long)le+a[i].len;
	}
	if(le%2==0){
		mid=le/2;
	}else{
		mid=(le+1)/2-1;
	}
	for(int i=1;i<=n;i++){
		cnt+=a[i].len;
		if(cnt-a[i].len<mid&&cnt>mid){
			r.len=cnt-mid;
			l.len=a[i].len-r.len;
			if(le%2==1)l.len--;
			if(l.len==0)l.len=a[i-1].len,l.x=a[i-1].x,l.id=i-1,r.x=a[i].x,r.id=i;
			else l.x=r.x=a[i].x,l.id=r.id=i;
		}else if(cnt-a[i].len==mid&&cnt>mid){
			r.len=a[i].len,r.x=a[i].x;
			l.len=a[i-1].len,l.x=a[i-1].x;
			l.id=i-1,r.id=i;
		}
	}
	while(l.id>=1&&r.id<=n){
		if(l.x!=r.x){
			ans+=min(l.len,r.len);
			l.len-=min(l.len,r.len);
			r.len-=min(l.len,r.len);
		}else{
			l.len-=min(l.len,r.len);
			r.len-=min(l.len,r.len);
		}
		if(l.len==0)l.id--,l.len=a[l.id].len,l.x=a[l.id].x;
		if(r.len==0)r.id++,r.len=a[r.id].len,r.x=a[r.id].x;
	}
	cout<<ans;
	return 0;
}
