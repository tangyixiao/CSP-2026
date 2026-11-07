#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N = 5e5 + 5,M = 3e5 + 5;
queue <int> q;
int n,m;
int a[N],b[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++) scanf("%d",&a[i]);
	int temp = 1;
	while(temp <= n){
		for (int i = temp; i <= n; i++){
			q.push(a[i]);
			if (b[a[i]]){
				q.pop();
				while(q.front() != a[i]){
					b[q.front()]--;
					q.pop();
				}
			}
			else b[a[i]]++;
		}
		printf("%d ",b[temp]);
		temp++;
	}
	return 0;
}