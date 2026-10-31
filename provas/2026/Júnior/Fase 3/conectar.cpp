#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

vector<int> adj[MAXN];
bool visitado[MAXN];
int id_comp[MAXN];
int tam_comp[MAXN];

void busca_em_profundidade(int cidade, int componente){
    if(visitado[cidade]){
        return;
    }

    visitado[cidade] = true;
    tam_comp[componente]++;
    id_comp[cidade] = componente;

    for(int i = 0; i < adj[cidade].size(); i++){
        int vizinho = adj[cidade][i];

        busca_em_profundidade(vizinho, componente);
    }

}

int main(void){
    long long N, M, Q;
    cin >> N >> M >> Q;

    int u, v;

    for(int i = 0; i < M; i++){
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int id_atual = 1;
    for(int i = 1; i <= N; i++){
        if(!visitado[i]){
            busca_em_profundidade(i, id_atual);
            id_atual++;
        }
    }

    /*
    for(int i = 1; i <= N; i++){
        cout << id_comp[i] << " ";
        if(i == N){
            cout << "\n";
        }
    }

    for(int i = 1; i <= id_atual; i++){
        cout << tam_comp[i] << " ";
        if(i == id_atual){
            cout << "\n";
        }
    }
    */

    long long maior, menor, Qtd_total, Qtd, A, B;

    for(int i = 0; i < Q; i++){
        cin >> A >> B;
        
        if(id_comp[A] == id_comp[B]){
            cout << -1 << "\n";
        }else{
            menor = min(tam_comp[id_comp[A]], tam_comp[id_comp[B]]);
            maior = N - menor;

            Qtd_total = menor*(menor - 1)/2 + maior*(maior - 1)/2;
            Qtd = Qtd_total - M;

            cout << Qtd << "\n";
        }
    }

    return 0;
}