#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int step(int n, int k){
    
    if(k == 1){
        return n;
    }else if(k % 2 == 0){
        return step(n, k/2) * step(n, k/2);
    }else{
        int x = k - 1;
        return step(n, x/2) * step(n, x/2) * n;
    }
}
int main() {
    int n = 0; 
    cin >> n;
    int k = 0;  
    cin >> k;
    int i = 0;
    int o = 0;
    o = step(n, k);
    cout << o;
}






