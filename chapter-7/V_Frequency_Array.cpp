#include <bits/stdc++.h>

using i64 = long long int;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    i64 n, m;
    cin >> n >> m;

    int freq[m + 1] = {0};
    for(int i = 0; i < n; i++){
        i64 x;
        cin >> x;
        if(x <= m){
            freq[x]++;
        }
    }

    for(int i = 1; i <= m; i++){
        cout  << freq[i] << endl;
    }

    return 0;
}
