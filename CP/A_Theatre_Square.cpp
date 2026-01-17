#include<iostream>
using namespace std;

int main(){
    
    long long result;
    long long n,m,a;
    
    cin >> n >> m >> a ;

    if(n%a==0 && m%a==0){
        result=(n/a)*(m/a);
    }

    else if(n%a==0 && m%a!=0){
        result=(n/a)*(m/a +1);
    }
    
    else if(n%a!=0 && m%a==0){
        result=(n/a +1)*(m/a );
    }
    else{
        result=(n/a +1)*(m/a +1);
    }
    cout << result;
}