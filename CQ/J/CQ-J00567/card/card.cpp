#include<iostream>
using namespace std;
int top=0,card[500];
void push(int x){
	top++;
	card[top]=x;
}
void pop(){
	top--;
}
int get(int x){
	return card[x];
}
int main(){
	int n,m,a[500],count[500]={},c[500]={},num;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int b=i;b<n;b++){
			num=a[b];
			if(c[num]>0){
				while(get(top)!=num){
					c[get(top)]--;
					pop();
				}
				c[get(top)]--;
				pop();
			}
			push(num);
			c[num]++;
		}
		while(top>0){
			count[get(top)]++;
			pop();
		}
		for(int j=1;j<=m;j++){
			c[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<count[i]<<' ';
	}
}
