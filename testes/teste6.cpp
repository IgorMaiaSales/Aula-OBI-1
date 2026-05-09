#include <bits/stdc++.h>

using namespace std;

int main(void){
    int i = 10;

    int* p;

    p = &i;

    cout << i << " " << *p << " " << p[0] << "\n";

    return 0;
}