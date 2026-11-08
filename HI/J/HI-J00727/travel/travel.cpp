#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
    if(a==c){
        cout<<"1";
    }else{
        cout<<"0";
    }
    int e,f;
    e=b/100;
    f=d/100;
    if(e==f){
        cout<<"1";
	} else{
	    cout<<"0";
    }
    int p,q;
    p=b%100;
    q=d%100;
    if(79<=p<=81,70<=p<=81||81<p<=83,81<q<=83){
        cout<<"1";
    }else{
        cout<<"0"; 
	} 
	if(c-d==1||d-c==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	
	
}
