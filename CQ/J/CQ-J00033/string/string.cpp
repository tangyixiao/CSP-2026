#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int num;
	char c;
}a[200010],l[200010],r[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	/*
	int n;
	cin>>n;
	int mid;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		mid+=a[i].num;
	}
	mid=ceil(mid/2.0);
	int suml=0;
	char x='0';
	int ii=0;
	int xx=0;
	for(int i=1;;i++){
		l[i].num=a[i].num;l[i].c=a[i].c;
		suml+=a[i].num;
		if(suml>mid-1){
			xx=suml-(mid-1);
			l[i].num-=xx;
			char x=l[i].c;
			ii=i;
			break;
		}
		if(suml==mid-1){
			ii=i;
			break;
		}
	}
	int iii=1;
	for(int i=ii+1;i<=n;i++){
		if(i==ii+1&&x!='0'){
			r[iii].c=x;r[iii].num=xx;
			iii++;
		}
		r[iii].c=a[i].c;r[iii].num=a[i].num;
		iii++;
	}
	int ll=ii,rr=ii+1;
	int ans=0;
	for(int i=1;;i++){
		if(l[ll].c!=r[rr].c){
			l[ll].num--,r[rr].num--;
			ans++;
		}
		else l[ll].num--,r[rr].num--;
		if(l[ll].num==0)ll--;
		if(r[rr].num==0)rr++;
		if(ll<1||rr>n/2)break;
	}
	cout<<ans;
	*/
	//Á¦½ßÁË 
	int n;
	cin>>n;
	string s="";
	for(int i=0;i<n;i++){
		int x;
		char y;
		cin>>x>>y;
		for(int j=0;j<x;j++){
			s=s+y;
		}
	}
	int len=s.size();
	int ans=0;
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1])ans++;
	}
	cout<<ans;
	return 0;
}

