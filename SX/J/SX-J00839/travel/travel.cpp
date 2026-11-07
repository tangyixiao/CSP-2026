#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int m,n,ar=0,br=0;
	string a,b;
	cin>>m>>a>>n>>b;
	if(m==n){
		cout<<"1";
		for(int i=0;i<2;i++){
			ar=ar*10+a[i];
		}for(int i=0;i<2;i++){
			br=br*10+b[i];
		}if(ar==br){
			cout<<"1";
			char x=a[a.size()-1],y=b[b.size()-1];
			char minn=min(x,y);
			if(minn==y){
				y=x;
				x=minn;
			}
			if(y-x>2){
				cout<<"00";
				return 0;
			}else if(y-x==1){
				if(y=='D'){
					cout<<"00";
					return 0;
				}else{
					cout<<"11";
					return 0;
				}
			}else{
				if(y=='F'){
					cout<<"11";
					return 0;
				}else if(y=='C'){
					cout<<"10";
					return 0;
				}else{
					cout<<"00";
					return 0;
				}
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else {
		cout<<"0000";
		return 0;
	}
	return 0;
}