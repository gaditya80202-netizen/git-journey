#include <iostream>
using namespace std;

int checkcond(){
    int n;
    cin >> n;
    int arr[n];
    int x;
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int a=0;a<n;a++){
        if((arr[a]<=x && x<=arr[++a]) || (arr[a]>=x && x>=arr[++a])){
            return 0;
        }
        else{
                return 1;
            }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        if(checkcond()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }   
    
}