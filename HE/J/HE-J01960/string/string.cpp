#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	long long num;
	char x;
}a[N];
long long n,head,tail,hs,ts,hh,tt;
char h,t;
long long sum,m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].x;
		m+=a[i].num;
	}
	head=1;
	tail=n;
	h=a[head].x;
	t=a[tail].x;
	hs=a[head].num;
	ts=a[tail].num;
	hh+=hs;
	tt+=ts;
	long long l1=m/2;
	while(hh<=l1&&tt<=l1){
		if(h==t){
			if(hs>ts){
				tail--;
				hs-=ts;
				if(tt+a[tail].num<=l1){
					t=a[tail].x;
					ts=a[tail].num;
					tt+=ts;
				}else{
					t=a[tail].x;
					ts=l1-tt;
					tt=l1;
				}
			}else if(hs<ts){
				head++;
				ts-=hs;
				if(hh+a[head].num<=l1){
					h=a[head].x;
					hs=a[head].num;
					hh+=hs;
				}else{
					h=a[head].x;
					hs=l1-hh;
					hh=l1;
				}
			}else{
				tail--;
				head++;
				if(hh+a[head].num<=l1){
					h=a[head].x;
					hs=a[head].num;
					hh+=hs;
				}else{
					h=a[head].x;
					hs=l1-hh;
					hh=l1;
				}
				if(tt+a[tail].num<=l1){
					t=a[tail].x;
					ts=a[tail].num;
					tt+=ts;
				}else{
					t=a[tail].x;
					ts=l1-tt;
					tt=l1;
				}
			}
		}
		else{
			if(hs>ts){
				sum+=ts;
				tail--;
				hs-=ts;
				if(tt+a[tail].num<=l1){
					t=a[tail].x;
					ts=a[tail].num;
					tt+=ts;
				}else{
					t=a[tail].x;
					ts=l1-tt;
					tt=l1;
				}
			}else if(hs<ts){
				sum+=hs;
				head++;
				ts-=hs;
				if(hh+a[head].num<=l1){
					h=a[head].x;
					hs=a[head].num;
					hh+=hs;
				}else{
					h=a[head].x;
					hs=l1-hh;
					hh=l1;
				}
			}else{
				sum+=hs;
				tail--;
				head++;
				if(hh+a[head].num<=l1){
					h=a[head].x;
					hs=a[head].num;
					hh+=hs;
				}else{
					h=a[head].x;
					hs=l1-hh;
					hh=l1;
				}
				if(tt+a[tail].num<=l1){
					t=a[tail].x;
					ts=a[tail].num;
					tt+=ts;
				}else{
					t=a[tail].x;
					ts=l1-tt;
					tt=l1;
				}
			}
		}
		if(tt==l1&&hh==l1&&hs==0&&ts==0)break;
	}
	cout<<sum;
} 

//Trick||Treat!
