#include <iostream>

using namespace std;


int main(){
    int n,l; // n: number of lanterns
    cin >> n;
    cin >> l;

    int lamps[n];

    for(int i=0;i<n;i++){
        cin >> lamps[i];
    }

    for(int j=0;j<n;j++){
        cout << lamps[j];
    }

}