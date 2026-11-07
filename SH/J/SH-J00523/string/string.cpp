#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
struct Node{
	ll a;
	char b;
}st[N],c[N],d[N];
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n;
	ll sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i].a>>st[i].b;
		sum+=st[i].a;
	}
	ll mid=sum/2,nsum=0,csum=0,dsum=0;
	for(int i=1;i<=n;i++){
		if(nsum>=mid)break;
		if(mid-nsum-st[i].a>=0){
			c[++csum].a=st[i].a;
			c[csum].b=st[i].b;
			nsum+=st[i].a;
		}
		else {
			c[++csum].a=st[i].a-mid+nsum;
			c[csum].b=st[i].b;
			break;
		}
	}
	nsum=0;
	for(int i=n;i>=1;i--){
		if(nsum>=mid)break;
		if(mid-nsum-st[i].a>=0){
			d[++dsum].a=st[i].a;
			d[dsum].b=st[i].b;
			nsum+=st[i].a;
		}
		else{
			d[++dsum].a=st[i].a-mid+nsum;
			d[dsum].b=st[i].b;
			break;
		}
	}
//	for(int i=1;i<=csum;i++)cout<<c[i].a<<' '<<c[i].b<<"\n";
//	cout<<"-------\n";
//	for(int i=1;i<=dsum;i++)cout<<d[i].a<<' '<<d[i].b<<"\n";
	//cout<<csum<<"\n"<<dsum<<"\n";
	ll cc=1,dd=1,ans=0;
	while((cc<=csum) && (dd<=dsum)){
		if(c[cc].a < d[dd].a){
			if(c[cc].b == d[dd].b){
				cc++;
				continue;
			}
			ans+=c[cc].a;
			d[dd].a-=c[cc].a;
			cc++;
		}
		else if(c[cc].a == d[dd].a){
			if(c[cc].b == d[dd].b){
				cc++;
				dd++;
				continue;
			}
			ans+=c[cc].a;
			cc++;
			dd++; 
		}
		else{
			if(c[cc].b == d[dd].b){
				dd++;
				continue;
			}
			ans+=d[dd].a;
			c[cc].a-=d[dd].a;
			dd++;
		}
	}
	cout<<ans;
	return 0;
} 
