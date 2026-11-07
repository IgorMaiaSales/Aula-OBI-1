#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;
long long prof[MAXN];

int main(void){
    int N;
    cin >> N;

    set<int> elementos;
    long long total_comp = 0;

    for(int i = 0; i < N; i++){
        int X;
        cin >> X;

        long long prof_ant = -1;
        long long prof_suc = -1;

        auto it_sucessor = elementos.lower_bound(X);

        if(it_sucessor != elementos.end()){
            prof_suc = prof[*it_sucessor];
        }

        if(it_sucessor != elementos.begin()){
            auto it_predecessor = it_sucessor;
            it_predecessor--;
            prof_ant = prof[*it_predecessor];
        }

        prof[X] = max(prof_ant, prof_suc) + 1;
        total_comp += prof[X];

        elementos.insert(X);
    }

    cout << total_comp << "\n";


    return 0;
}