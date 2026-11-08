#include<bits/stdc++.h>
using namespace std;
const int N=1e9+5;
int n,m,a[10000],b[10000],l=0,c[10000];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
    for(int i=1;i<=n;i++){
    	l=0;
    	for(int f=i;f<=n;f++){
    		l++;
    		b[l]=a[f];
    		for(int j=1;j<l;j++){
    			if(b[j]==a[f]){
    				l=j;
    				b[l]=a[f];
    				break;
				}
			}
		}
		for(int f=1;f<=l;f++){
//	cout<<b[f]<<" ";
			c[b[f]]++;
		}
	//out<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
}
