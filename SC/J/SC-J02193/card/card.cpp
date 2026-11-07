#include<bits/stdc++.h>
using namespace std;
int n, m, a[300020], c[300020], b[300020];
int check(int x){
	for(int i = 0; i < m;i++){
		if(c[i] == x){
			return i;
		}
	}
	return -1;
}
void change(int x){
	for(int i = x; i < m;i++){
		a[i] = c[m - i - 1];
	} 
	for(int i = x; i < m;i++){
		c[i] = 0;
	}
}
void ch(){
	for(int i = 0; i < m;i++){
		b[c[i]]++;
	} 
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 0; i < m;i++){
		cin>>a[i];
	}
	int k = 0;
	for(int i = 0; i < n;i++){
		for(int j = 0; j < m;j++){
			int v = check(a[j]);
			if(v != -1){
				change(v);
				c[v] = a[j];
				k -= v - 1;
			}else{
				c[k++] = a[i];
				a[i] = 0;
			}
		}
		ch();
	}
	for(int i = 0; i < m;i++){
		cout<<b[i];
	}
	return 0;
}