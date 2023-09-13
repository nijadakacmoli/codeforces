#include <stdio.h>
#include <stdlib.h>
 
void solve(){
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
   // printf("%d\n", count);
    if(count == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
}
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
