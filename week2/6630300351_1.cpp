#include <iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){

    for(int i=0 ;i<20 ;i++){
        int ans;
        ans = fib(i);
        cout << "F(" << i << ") = " << ans << endl;
    }

    return 0;
}
