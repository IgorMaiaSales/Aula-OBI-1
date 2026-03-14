#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int v[5] = {3, 5, 1, 2, 4};

    sort(v[0], v[4]);

    for(int i = 0; i < 5; i++){
        cout << v[i];
    }

    cout << "\n";

    return 0;
}