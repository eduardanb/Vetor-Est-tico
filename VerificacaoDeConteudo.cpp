#include <iostream>
using namespace std;

void ler_vet(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "Insira o " << i+1 << " valor: ";
        cin >> vet[i];
    }
}


void imprimir_vet(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << vet[i] << " ";
    }
    cout << endl;

}

bool verificar_conteudo(int vet1[], int vet2[], int tam){
    for(int i = 0; i < tam; i++){
        if (vet1[i] == vet2[i]){
            return true;
        }
    } return false;
}

int main(){

    int tam;
    cout << "Informe os valores dos vetores: ";
    cin >> tam;

    int vet1[tam];
    ler_vet(vet1, tam);
    imprimir_vet(vet1, tam);

    int vet2[tam];
    ler_vet(vet2, tam);
    imprimir_vet(vet2, tam);

    verificar_conteudo(vet1, vet2, tam);

    bool resultado;
    resultado = verificar_conteudo(vet1, vet2, tam);
    cout << "Resultado: [0 para False | 1 para True] " << resultado << endl;

    system("pause");
    return 0;
}