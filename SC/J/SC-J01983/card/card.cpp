#include <iostream>
int n,m;
int main(){
	std::cin>>n>>m;
	int s[n];
	struct link{
		link *last;
		int v;
	};
	link *head=NULL;
	link *last=NULL;
	link *l=NULL;
	int s1[m];
	for(int ia=0;ia<m;ia++){
		s1[ia]=0;
	}
	for(int ia=0;ia<n;ia++){
		std::cin>>s[ia];
	}
	for(int ia=0;ia<n;ia++){
		for(int ib=ia;ib<n;ib++){
			if(head==NULL){
				head=new link;
				head->last=NULL;
				head->v=s[ib];
				l=head;
			}else{
				while(1){
					if(l->v!=s[ib]){
						l=l->last;
						if(l==NULL){
							break;
						}
					}else{
						head=l;
						break;
					}
				}
				if(l!=NULL){
					continue;
				}
				last=head;
				head=new link;
				head->last=last;
				head->v=s[ib];
				l=head;
			}
			
		}
		if(head==NULL){continue;}
		while(1){
			s1[head->v-1]+=1;
			if(head->last!=NULL){
				head=head->last;
			}else{break;}
			
		}
		head=NULL;
	}
	for(int ia=0;ia<m;ia++){
		std::cout<<s1[ia]<<' ';
	}
	return 0;
}