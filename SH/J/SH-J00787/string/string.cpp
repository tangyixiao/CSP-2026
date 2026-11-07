#include<bits/stdc++.h>
using namespace std;
int n,f,x;
string s;
struct node{
	char c;
	long long num;
}a[200010];
long long sum,ans,pre[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		pre[i]=pre[i-1]+a[i].num;
	}
	sum=pre[n];
	if(sum%2){
		f=1;
	}else{
		f=0;
	}
	x=lower_bound(pre+1,pre+n+1,(sum+f)/2)-pre;
	if(pre[x]!=(sum+f)%2){
		for(int i=n;i>x;i--){
			a[i+1].num=a[i].num;
			a[i+1].c=a[i].c;
		}
		a[x+1].c=a[x].c;
		a[x+1].num=pre[x]-(sum+f)/2;
		a[x].num-=a[x+1].num+f;
	}
	/*for(int i=1;i<=n+1;i++){
		cout<<a[i].num<<" "<<a[i].c<<endl;
	}*/
	if(f==1){
		for(int i=1,j=n+1;j>=x&&i<=x;){
			if(a[i].c==a[j].c){
				if(a[i].num==a[j].num){
					i++;
					j--;
				}else if(a[i].num<a[j].num){
					a[j].num-=a[i].num;
					i++;
				}else{
					a[i].num-=a[j].num;
					j--;
				}
			}else{
				if(a[i].num==a[j].num){
					ans+=a[i].num;
					i++;
					j--;
				}else if(a[i].num<a[j].num){
					ans+=a[i].num;
					a[j].num-=a[i].num;
					i++;
				}else{
					ans+=a[j].num;
					a[i].num-=a[j].num;
					j--;
				}
			}
		}
	}else{
		for(int i=1,j=n+1;j>=x&&i<=x;){
			if(a[i].c==a[j].c){
				if(a[i].num==a[j].num){
					i++;
					j--;
				}else if(a[i].num<a[j].num){
					a[j].num-=a[i].num;
					i++;
				}else{
					a[i].num-=a[j].num;
					j--;
				}
			}else{
				if(a[i].num==a[j].num){
					ans+=a[i].num;
					i++;
					j--;
				}else if(a[i].num<a[j].num){
					ans+=a[i].num;
					a[j].num-=a[i].num;
					i++;
				}else{
					ans+=a[j].num;
					a[i].num-=a[j].num;
					j--;
				}
			}
		}
	}
	cout<<ans<<" "<<endl;
	return 0;
}
