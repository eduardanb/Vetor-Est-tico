#include <iostream>
using namespace std;

void LerVet(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite o " << i+1 << " termo: ";
        cin >> vet[i];
    }
}

void Imprimirvet(int vet[], int tam){
    cout << endl;
    for (int i = 0; i < tam; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

void Quadrado(int vet[], int tam){
    for (int i = 0; i < tam; i++) {
        vet[i] = vet[i] * vet[i];
    }
}

int main(){
    int tam;
    cout << "Tamanho do Vetor: ";
    cin >> tam;
    int vet[tam];

    LerVet(vet, tam);
    Imprimirvet(vet, tam);

    cout << "Quadrado: " << endl;
    Quadrado(vet, tam);
    Imprimirvet(vet, tam);


    system("pause");
    return 0;
}