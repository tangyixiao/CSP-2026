#include<bits/stdc++.h>
using namespace std;
struct zf{
	int a;
	char c;
}b[200005];
int n;
long long l1=1,r1,l2,r2,sum,cha1,cha2,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i].a>>b[i].c;
		sum+=b[i].a;
	}
	int i=1,j=n;
	r1=b[1].a,r2=sum-b[n].a+1,l2=sum;
	while(1){
		if(r2==l1||abs(r2-l1)==1){
			break;
		}
		cha1=r1-l1+1,cha2=l2-r2+1;
		if(b[i].c!=b[j].c){
			if(cha1>cha2){
				cnt+=cha2;
				j--;
				l1+=(l2-(r2-1));
				l2=r2-1;
				r2=r2-b[j].a;
			}else if(cha1<cha2){
				cnt+=cha1;
				i++;
				l2-=((r1+1)-l1);
				l1=r1+1;
				r1=r1+b[i].a;
			}else{
				cnt+=cha1;
				i++,j--;
				l2=r2-1;
				r2=r2-b[j].a;
				l1=r1+1;
				r1=r1+b[i].a;
			}
		}else{
			if(cha1>cha2){
				j--;
				l1+=(l2-(r2-1));
				l2=r2-1;
				r2=r2-b[j].a;
			}else if(cha1<cha2){
				i++;
				l2-=((r1+1)-l1);
				l1=r1+1;
				r1=r1+b[i].a;
			}else{
				i++,j--;
				l2=r2-1;
				r2=r2-b[j].a;
				l1=r1+1;
				r1=r1+b[i].a;
			}
		}
	}
	cout<<cnt;
	return 0;
}
