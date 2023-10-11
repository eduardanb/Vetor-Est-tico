#include <iostream>
using namespace std;

void ler_vet(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "Posicao " << i+1 << ": ";
        cin >> vet[i];
    }
}

void imprimir_vet(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << vet[i] << " ";
    }
}

void inverter_vet(int vet[], int tam){
    for (int i = 0; i < tam / 2; i++){
        int aux;
        aux = vet[i];
        vet[i] = vet[tam - 1 - i];
        vet[tam - 1 - i] = aux;
    }
}

int main(){

    int tam;
    cout << "Tamanho do Vetor: ";
    cin >> tam;

    int vet[tam];

    ler_vet(vet, tam);

    cout << endl;
    cout << "-------------------------------" << endl;

    cout << "Vetor: " << endl;
    imprimir_vet(vet, tam);

    cout << endl;
    cout << "-------------------------------" << endl;

    cout << "Vetor Invertido: " << endl;

    inverter_vet(vet, tam);
    imprimir_vet(vet, tam);

    cout << endl;
    cout << "-------------------------------" << endl;

    system("pause");
    return 0;
}