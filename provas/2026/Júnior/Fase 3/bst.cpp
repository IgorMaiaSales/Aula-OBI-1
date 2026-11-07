#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int valor[MAXN];
int filho_esq[MAXN];
int filho_dir[MAXN];

int main(void){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        filho_esq[i] = -1;
        filho_dir[i] = -1;
    }

    long long total_comp = 0;

    for(int i = 0; i < N; i++){
        int X;
        cin >> X;
        valor[i] = X;

        if(i > 0){
            int atual = 0;
            long long prof = 0;

            while(true){
                prof++;

                if(X < valor[atual]){
                    if(filho_esq[atual] == -1){
                        filho_esq[atual] = i;
                        break;
                    }else{
                        atual = filho_esq[atual];
                    }
                }else{
                    if(filho_dir[atual] == -1){
                        filho_dir[atual] = i;
                        break;
                    }else{
                        atual = filho_dir[atual];
                    }
                }
            }

            total_comp += prof;
        }
    }

    cout << total_comp << "\n";

    return 0;
}