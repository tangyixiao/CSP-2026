#include <bits/stdc++.h>
using namespace std;
int k[300001],a[300001],b[500001];
bool tf[300001];
int m,n;
void f(int x){
	int c=0;
	for(int i=1;i<=n;i++){
		tf[i]=0;
	}
	for(int i=x;i<=n;i++){
		c=0;
		a[i]=k[i];
		for(int j=x;j<i;j++){
			if(a[j]==a[i]){
				c=j;
				//cout << "because "<<a[j] <<" the "<<j <<"_th card and"<<a[i] <<" the "<<i <<"_th card are the same shanchu"<<endl;
				break;
			}
		}
		if(c){
			for(int j=c;j<i;j++){
			    tf[j]=1;
			    //cout << "the card "<< a[j]<<" is banned"<<endl;
			}
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		int x;cin >> x;
		k[i]=x;
	}
	//cout << endl;
	for(int i=1;i<=n;i++){
	//	cout << "i=" << i<<endl;
		f(i);
		for(int j=i;j<=n;j++){
			//cout << " the card is:" << a[j] << endl;
			if(tf[j]==0){
				b[a[j]]++;//cout <<a[j]<<"added"<<endl;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << b[i] << " ";
	}
	return 0;
}
