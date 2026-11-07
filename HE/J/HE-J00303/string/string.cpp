#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	int len;
	char ch; 
}; 
node s[N];
int n;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].len>>s[i].ch;
	}
	int l=0,r=0;
	for(int i=1,j=n;i<j;){
		if(l==0) l=s[i].len;
		if(r==0) r=s[j].len;
		if(l<r){
			if(s[i].ch!=s[j].ch){
				ans+=l;
			}
			l=0,r-=l;
			i++;
		}else if(l>r){
			if(s[i].ch!=s[j].ch){
				ans+=r;
			}
			l-=r,r=0;
			j--;
		}else{
			if(s[i].ch!=s[j].ch){
				ans+=l;
			}
			l=0,r=0;
			j--;
			i++;
		}
	}
	cout<<ans;
	return 0;
}
