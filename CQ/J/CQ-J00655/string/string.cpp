#include<bits/stdc++.h>
using namespace std;
long long n,ans,cnt;
struct node{
	long long num;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long lo=1;
	for(int i=1;i<=n;i++){
		int num1;
		char ch;
		cin>>num1>>ch;
		if(a[lo].c==ch){
			a[lo].num+=num1;
		}else {
			lo++;
			a[i].num=num1;
			a[i].c=ch;
			cnt++;
		}
	}
	if(cnt<2){
		cout<<0;
		return 0;
	}
	long long l=1,r=cnt;
	while(l<r){
		long long nm=min(a[l].num,a[r].num);
		if(a[l].c!=a[r].c){
			ans+=nm;
			a[l].num-=nm;
			a[r].num-=nm;
			if(a[l].num<=0)l++;
			if(a[r].num<=0)r--;
		}else{
			a[l].num-=nm;
			a[r].num-=nm;
			if(a[l].num<=0)l++;
			if(a[r].num<=0)r--;
		}
	}
	
	cout<<ans;
	return 0;
} 
