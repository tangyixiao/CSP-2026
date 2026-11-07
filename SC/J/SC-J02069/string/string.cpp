#include <cstdio>
using namespace std;
struct part{
	int l;
	char c;
}a[200020];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i].l,&a[i].c);
	}
	int front=1,last=n;
	long long acts=0;
	while(front<last){
		if(a[front].l>a[last].l){
			if(a[front].c!=a[last].c){
				acts+=a[last].l;
			}
			a[front].l-=a[last].l;
			last--;
		}else if(a[front].l<a[last].l){
			if(a[front].c!=a[last].c){
				acts+=a[front].l;
			}
			a[last].l-=a[front].l;
			front++;
		}else{
			if(a[front].c!=a[last].c){
				acts+=a[front].l;
			}
			front++;
			last--;
		}
	}
	printf("%lld",acts);
	
	return 0;
}