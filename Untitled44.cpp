#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "N" << endl;  
    }
    
    float S = 0;  
    int i = 1;
    while (i <= n) {
        S += i*1.0 / (i+1);  
        i++; 
    }

    cout<<fixed<<setprecision(2)<<S;
    return 0;
}