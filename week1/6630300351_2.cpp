#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;

    for(int i=1 ;i<=n ;i++){
        for(int j=i ;j<=n ;j++){
            for(int k=i ;k<=j ;k++){
                cout << k;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;

}
