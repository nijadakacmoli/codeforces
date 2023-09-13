#include <stdio.h>
 
void solve(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(int i=0;i<n;i++){
       sum+=arr[i]; 
    }
    int count=0;
    for(int i=0;i<n;i++){
        if((float)arr[i]==(float)(sum-arr[i])/(n-1)){    
            count++; 
        }
    }
    if(count > 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
 
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
