#include<bits/stdc++.h>
using namespace std;

struct node{
	char alp;
	long long cnt;
};

node a[200005];
long long ans=0;
long long n;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt;
		cin>>a[i].alp;
	}

	long long l=1,r=n;
	while(l<r){
		if(a[l].alp!=a[r].alp){
			if(a[l].cnt<a[r].cnt){
				ans+=a[l].cnt;
				a[r].cnt-=a[l].cnt;
				a[l].cnt=0;
				l++;
			}
			else if(a[l].cnt>a[r].cnt){
				ans+=a[r].cnt;
				a[l].cnt-=a[r].cnt;
				a[r].cnt=0;
				r--;
			}else if(a[l].cnt==a[r].cnt){
				ans+=a[l].cnt;
				a[l].cnt=0;
				a[r].cnt=0;
				l++;
				r--;
			}
		}
		else{
			if(a[l].cnt<a[r].cnt){
				a[r].cnt-=a[l].cnt;
				a[l].cnt=0;
				l++;
			}
			else if(a[l].cnt>a[r].cnt){
				a[l].cnt-=a[r].cnt;
				a[r].cnt=0;
				r--;
			}else if(a[l].cnt==a[r].cnt){
				a[l].cnt=0;
				a[r].cnt=0;
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}


