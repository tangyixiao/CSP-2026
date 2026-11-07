#include<bits/stdc++.h>
using namespace std;
const int N=500009;
const int N1_6=509;
const int NA=200009;
int n,m;
int a[N];
int ans1_6[N1_6];
bool kl1_6[N1_6];
void solve1_6(){
	for(int p=1;p<=n;p++){
		for(int i=p;i<=n;i++)kl1_6[i]=0;
		for(int i=p;i<=n;i++){
			for(int j=i-1;j>=p;j--){
				if(a[i]==a[j]&&!kl1_6[j]){
					for(int k=j;k<i;k++)kl1_6[k]=1;
					break;
				}
			}
		}
		for(int i=p;i<=n;i++){
			if(!kl1_6[i])ans1_6[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans1_6[i]<<' ';
}
int lrnA=0;
int lA[NA],rA[NA];
void solveA(){
	for(int i=1;i<=n+1;i++){
		if(a[i]!=a[i-1]){
			rA[lrnA]=i-1;
			lA[++lrnA]=i;
		}
	}
	lrnA--;
	for(int i=1;i<=lrnA;i++){
		cout<<rA[i]<<' ';
	}
}
int ans13_14[5];
void solve13_14(){
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n])ans13_14[a[i]]++;
		ans13_14[a[n]]++;
	}
	cout<<ans13_14[1]<<' '<<ans13_14[2];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool isA=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])isA=0;
	}
	if(n<=500)solve1_6();
	else if(isA)solveA();
	else if(m<=2)solve13_14();
	return 0;
} 
