#include <stdio.h>
 
void solve(){
    int a[3];
    int sum =0;
    int max = 0;
    for(int i=0;i<3;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<3;i++){
        sum+= a[i];
    }
    //printf("SUM :: %d\n",sum);
    for(int i=0;i<3;i++){ 
        if(a[i]>max){
            max = a[i];
        } 
    }  
    //printf("MAX :: %d\n", max);
    if(2*max == sum){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 }
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}
