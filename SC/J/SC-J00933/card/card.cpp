#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int n,top,m,a[500050],last[300050],stk[500050],flag=1,end[500050];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(i>1&&a[i]<a[i-1]) {
			flag=0;
		}
		end[a[i]]=i;
	}
	for(int i=1; i<=m; i++) {
		if(flag) {
			cout<<end[i]<<' ';
		} else {
			int cnt=0;
			
			for(int j=1; j<=n; j++) {
				top=0;
				for(int c=j; c<=n; c++) {
					if(last[a[c]]) {
						while(top&&stk[top]!=a[c]) {
							--top;
						}
					} else {
						stk[++top]=a[c];
					}
					last[a[c]]=1;
				}
				while(top) {
					if(stk[top]==i) {
						++cnt;
						break;
					}
					--top;
				}
				for(int c=1; c<=m; c++) {
					last[c]=0;
				}
			}
			cout<<cnt<<' ';
		}
	}
	return 0;
}