#include<bits/stdc++.h>
using namespace std;
struct node{
	long long int a;
	char c;
}s[100010];
struct stu{
	char c1;
}b[100010];
long long int book[100010];
char c[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long int n;
	long long int cnt=0,x,k,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		cnt+=s[i].a; 
	}
	if(cnt%2==0){
		x=cnt/2;
		int cnt1=0;
		for(int i=1;i<=n;i++){
			cnt1+=s[i].a;
			if(cnt1>x){
				book[i]=cnt1-x;//中间值在第i段中的第cnt1-x个 
				k=i;//中间值在第i段中 
				break;
			}
			if(cnt1==x){
				book[i]=cnt1;
				k=i;
				break;
			}
		}
		for(int i=1;i<=k;i++){
			b[i].c1=s[i].c;
		}
		int d1;
		if(book[k]==s[k].a){
			d1=k+1;
		}
		else{
			d1=k;
		}
		if(d1==k){
			for(int i=d1+1;i<=n;i++){
				int flag=0;
				for(int j=1;j<=k;j++){
					if(s[i].c==b[j].c1){
						flag++;
					}
				}
				if(flag==0){
					ans+=s[i].a;
				}
			}
		}
		else if(d1==k+1){
			for(int i=d1;i<=n;i++){
				int flag=0;
				for(int j=1;j<=k;j++){
					if(s[i].c==b[j].c1){
						flag++;
					}
				}
				if(flag==0){
					ans+=s[i].a;
				}
			}
		}
		cout<<ans;
	}
	else{
		x=cnt/2+1;
		int cnt1=0;
		for(int i=1;i<=n;i++){
			cnt1+=s[i].a;
			if(cnt1>x){
				book[i]=cnt1-x;
				k=i;
				break;
			}
			if(cnt1==x){
				book[i]=cnt1;
				k=i;
				break;
			}
		}
		int d;
		if(book[k]==1){
			d=k-1;
		}
		else{
			d=k;
		}
		for(int j=1;j<=d;j++){
			b[j].c1=s[j].c;
		}
		int d1;
		if(book[k]==s[k].a){
			d1=k+1;
		}
		else{
			d1=k;
		}
		if(d1==k){
			if(b[k].c1!=s[k].c){
				ans+=s[k].a-book[k];
			}
			for(int i=d1+1;i<=n;i++){
				int flag=0;
				for(int j=1;j<=d;j++){
					if(s[i].c==b[j].c1){
						flag++;
					}
				}
				if(flag==0){
					ans+=s[i].a;
				}
			}
		}
		else if(d1==k+1){
			for(int i=d1;i<=n;i++){
				int flag=0;
				for(int j=1;j<=d;j++){
					if(s[i].c==b[j].c1){
						flag++;
					}
				}
				if(flag==0){
					ans+=s[i].a;
				}
			}
		}
		cout<<ans;
	}
	return 0;
}
