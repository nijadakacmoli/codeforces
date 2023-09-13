#include <atomic>
#include <climits>
#include <cstdio>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cstring>
#include <cmath>
#include <ratio>
#include <string>
#include <sys/types.h>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <deque>
#include <list>
#include <iterator>
#include <utility>
#include <errno.h>
#include <chrono>
#include <cmath>
#define YES cout<<"YES"<<endl
#define SWAP(x, y, T) do { T z = x; x = y; y = z; } while (0)
#define NO cout<<"NO"<<endl
#define bin_to_int(BIN_STR) stoi(BIN_STR, 0, 2); //binary string to the integer
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;
typedef vector<int> vi;
typedef deque<int> di;
typedef vector<ll> vl;
typedef set<int> set_inc;
typedef set<int, greater<int> > set_dec;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef map<int,int> mi;
typedef map<ll,ll> ml; 
typedef vi::iterator vi_it;
typedef mi::iterator mi_it;
 
 
using namespace std;
 
bool isSmaller(int a,int k){
    return (a<k);
}
 
void solve(){
            
    int n;
    cin >> n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> arr[i][j];
        }
    }
 
    int max =0;
    int answer = 0;
    for(int i=0;i<n;i++){
        if(arr[i][0] <= 10){
            if(max < arr[i][1]){
                max = arr[i][1];
                answer = i+1;
            }
        }
    }
    cout << answer << endl;
}   
int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ll t=1;
    int i=1;
    cin>>t;
    while(t--){
        //cout<<"Case #"<<i<<": ";
    
        solve();
        i++;
    }
    return 0;
}
 
//nijada kacmoli
