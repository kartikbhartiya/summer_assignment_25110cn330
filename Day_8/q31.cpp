#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        char k;
        for(int j = 1 ; j <= i ; j++){
            k = j + 'A' - 1;
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}