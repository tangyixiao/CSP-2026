#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int N=5e5+5;
const int M=3e5+5;
LL n,m,num;
LL Cards[N],nowcards[N],wingame[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>Cards[i];
	for(int i=1;i<=n;i++){
		num=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=num;k++){
				if(nowcards[k]==Cards[j]){
					num=k-1;
					break;
				}
			}
			nowcards[++num]=Cards[j];
		}
		for(int j=1;j<=num;j++)wingame[nowcards[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<wingame[i]<<" ";
	cout<<'\n';
	return 0;
}
