#include<bits/stdc++.h>
using namespace std;
struct Node{
	long long l;
	char c;
}a[200010]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i].l>>a[i].c;
		s+=a[i].l;
	}
	long long zh=0,fj=0; 
	for(long long i=1;i<=n;i++){
		zh+=a[i].l;
		if(zh==s/2&&s%2==0){
			fj=i;
			break;
		}
		if(zh>s/2){
			zh-=a[i].l;
			long long newl=s/2-zh;
			long long nextl=a[i].l-newl;
			if(s%2==1)nextl--;
			for(int j=n;j>=i+1;j--){
				a[j+1].l=a[j].l;
				a[j+1].c=a[j].c;
			} 
			a[i+1].l=nextl;
			a[i+1].c=a[i].c;
			a[i].l=newl;
			n++;
			fj=i;
			break;
		}
	}
	long long ans=0,l=1,r=n,w=0;
	char nextlc,nextrc;
	while(l<=fj&&r>fj){
		while(a[l].l<=a[r].l&&l<=fj&&r>fj){
			if(a[l].c!=a[r].c)ans+=a[l].l;
			a[r].l-=a[l].l;
			if(a[r].l==0)r--;
			l++;
		}
		while(a[l].l>a[r].l&&l<=fj&&r>fj){
			if(a[r].c!=a[l].c)ans+=a[r].l;
			a[l].l-=a[r].l;
			if(a[l].l==0)l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
