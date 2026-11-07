#include<bits/stdc++.h>
using namespace std;
char a[200005];
char q[200005];
char h[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int ans=0;
	int cnt=1;
	for(int i=1;i<=n;i++){
		long long x;
		char s;
		cin>>x>>s;
		ans+=x;
		for(int j=1;j<=x;j++){
			a[cnt]=s;
			cnt++;
		}
	}
	if(((1+ans)%2)==0){
		int mid=(1+ans)/2;
		for(int i=1;i<=mid-1;i++){
			q[i]=a[i];
		}
		int cnt_1=ans;
		for(int i=1;i<=mid-1;i++){
			h[i]=a[cnt_1];
			cnt_1-=1;
		}
		int ans_1=0;
		for(int j=1;j<=mid-1;j++){
			if(q[j]!=h[j]){
				ans_1++;
			}
		}
	cout<<ans_1;
	}
	else{
		int mid=ans/2;
		for(int i=1;i<=mid;i++){
			q[i]=a[i];
		}
		int cnt_1=ans;
		for(int i=1;i<=mid;i++){
			h[i]=a[cnt_1];
			cnt_1-=1;
		}
		int ans_1=0;
		for(int j=1;j<=mid ;j++){
			if(q[j]!=h[j]){
				ans_1++;
			}
		}
	cout<<ans_1;
	}

	return 0;
}
