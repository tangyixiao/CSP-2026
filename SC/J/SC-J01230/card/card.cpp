#include<bits/stdc++.h>
#include<queue>
using namespace std;
const int N=3*1e5+5;
long long da[N],a[N];
queue< int > lasta[N];
long long n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long ls;
		cin>>ls;
		a[i]=ls;
		lasta[ls].push(i);
//		lastaos[ls]++;
	}
	long long lols=0;
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(!lasta[a[i]].empty()){
				int ls=lasta[a[i]].front();
//				cout<<"ls: "<<ls<<" ";
				if(ls>=j){
					lols=i;
//					cout<<i<<" ! ";
					break;
				}
				else if(ls<j){
					lasta[a[i]].pop();
//					lastaos[a[i]]--;
				}
				else{
//					lastaos[a[i]]--;
				}
			}
		}
//		cout<<lols<<" | ";
		for(int i=n;i>=lols;i--){
			da[a[i]]++;
		}
		lols=j+1;
	}
	for(int i=1;i<=m;i++){
		cout<<da[i]<<" ";
	}
	return 0;
}