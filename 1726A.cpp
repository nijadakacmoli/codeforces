#include <algorithm>
#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
 
    int a[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    if (n==1) {
        cout<<0<<endl;
        return;
    }
    int case_1 = *max_element(a+1,a+n);
    int case_2 = *min_element(a,a+(n-1));
    case_1 = case_1 - a[0];
    case_2 = a[n-1] - case_2;
    int case_3 = 0;
    for(int i=0; i<n-1; i++){
        case_3 = max(case_3, a[i]-a[i+1]);
    }
    case_3 = max(case_3, a[n-1]-a[0]);
    cout<<max(case_3,max(case_2,case_1))<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
