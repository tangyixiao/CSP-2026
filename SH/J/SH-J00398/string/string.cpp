#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
long long num,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		num+=a[i];
	}
	num/=2;
	long long front=1,back=n;
	while(num>0){
		long long x=a[front],y=a[back];
		if(c[front]!=c[back]){
			if(num<min(x,y)){
				ans+=num;
			}
			else{
				ans+=min(x,y);
			}
		}
		num-=min(x,y);
		a[front]-=min(x,y);
		a[back]-=min(x,y);
		if(a[front]==0){
			front++;
		}
		if(a[back]==0){
			back--;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

