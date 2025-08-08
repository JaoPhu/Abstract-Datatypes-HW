#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool prime(int num){
    if(num==0) return false;
    if(num==1) return false;
    int p=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            p++;
        }
    }
    if(p==2){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int a=0;
    int sum;
    int sum2=0;
    string s;
    while(cin >> s){
        if(s=="-99"){
            break;
        }
        if(a==0){
            sum=stoi(s);
            a++;
            continue;
        }
        if(prime(stoi(s))){
            sum2=sum2+stoi(s);
        }
    }
    if(sum==sum2){
        cout << "true";
    }else{
        cout << "flase";
    }
}
