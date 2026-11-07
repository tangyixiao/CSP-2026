#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int l=0,r=n-1;
	unsigned long long ans=0;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				a[r]=0;
				r--;
			}else{
				a[r]-=a[l];
				a[l]=0;
				l++;
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				a[r]=0;
				r--;
			}else{
				a[r]-=a[l];
				ans+=a[l];
				a[l]=0;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
//ºÃÏñ²»ÄÑ
/*
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
//freopen("string.in","r",stdin);
//freopen("string.out","w",stdout);
//freopen("and.in","r",stdin);
//freopen("and.out","w",stdout);
//freopen("card.in","r",stdin);
//freopen("card.out","w",stdout);
#include<windows.h>
#include<doubao.com>
#include<chat.deepseek.com>
int mian() int mian()
#define int long long
*/ 
