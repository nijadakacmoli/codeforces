#include <stdio.h>
 
void torch(int i, int j);
int n;
int main(){
	int t; 
	int i;
	int j;
	scanf("%d\n", &t);
		for(int a = 0;a<t;a++){
			scanf("%d", &n);
			torch(i,j);
		}
	
return 0;
}
 
 
void torch(int i, int j){
	for(i = 1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(j == i){
				printf("1 ");
			}
			else if(j == 1){
				printf("1 ");
			}
		
			else{
				printf("0 ");
			}
		}
	printf("\n");
	}
}
