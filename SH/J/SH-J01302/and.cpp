#include<bits/stdc++.h>
using namespace std;

int n,m,l,sum=0,n2=1;

bool cmy(int a,int b){
    return a>=b;
}

struct o{
    int p;
    int k[34]={1};
};

int main(){
    o a[1001];
    int x[1001];
    cin>>n>>m;
    int ma[m]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i].p;
    }
    for(int i=1;i<=n;i++){
        x[i]=a[i].p;
    }
    sort(x+1,x+n+1,cmy);
    for(int i=1;i<=m;i++){
        a[i].p=x[i];
        l=a[i].p;
        for(int j=1;;j++){
        	if(a[i].p==1){
            	a[i].k[i]=1;
            	a[i].p=l;
            	break;
        	}else{
            	if(a[i].p%2==0){
                	a[i].k[i]=0;
                	a[i].p/=2;
                	cout<<a[i].k[i]<<' '<<a[i].p<<endl;
            	}else{
                	a[i].k[i]=1;
                	a[i].p--;
                	a[i].p/=2;
                	cout<<a[i].k[i]<<' '<<a[i].p<<endl;
            	}
        	}	
		}
    }
    for(int i=1;i<=30;i++){
        for(int j=m;j>=1;j--){
            if(a[j].k[i]!=0||a[j+1].k[i]!=0) a[j].k[i]=1;
            else a[j].k[i]=0;
        }
    }
    for(int i=1;i<=30;i++){
        if(a[m].k[i]==1){
            if(i==1) sum+=1;
            else{
                for(int j=i;j>1;j--){
                    n2*=2;
                }
                sum+=n2;
                n2=1;
            }
        }
    }
    cout<<sum;
    return 0;
}