#include<bits/stdc++.h>
using namespace std;
const int N=5e5+7,M=3e5+7;
int a[N];
int card[M],revcard[N],t[M];
int n,m;

void Setup(){
	for(int i=1;i<=m;i++){
		card[i]=-1;
	}
	for(int i=1;i<=n;i++){
		revcard[i]=-1;
	}

}

void Solve(int aa){
	int num=0;
	for(int i=aa;i<=n;i++){
		num++;
		if(card[a[i]]!=-1&&card[a[i]]<num){
			num=card[a[i]];
			revcard[num]=a[i];
		}
		else{
			card[a[i]]=num;
			revcard[num]=a[i];
		}
	}
	for(int i=1;i<=num;i++){
		//cout<<revcard[i]<<" ";
		t[revcard[i]]++;
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);


	int cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Setup();

	for(int i=1;i<=n;i++){//n rounds of game
		Solve(i);
		Setup();
	}

	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}



	return 0;
}
