#include <iostream>
using namespace std;

void LerVetor(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "Posicao " << i + 1 << ": "; 
        cin >> vet[i];
    }
}

void ImprimirVetor(int vet[], int tam){
    cout << endl;
    for (int i = 0; i < tam; i ++){
        cout << vet[i] << endl;
    }
    cout << endl;
}

int Pares(int vet[], int tam){
    int cont = 0;
    for (int i = 0; i < tam; i++){
        if (vet[i] % 2 == 0){
            cont ++;
        }
    } 
    return cont;
}

int Impares(int vet[], int tam){
    int cont = 0;
    for (int i = 0; i < tam; i++){
        if (vet[i] % 2 != 0){
            cont ++;
        }
    }
    return cont;
}

int main(){

    int tam;
    cout << "Tamanho do vetor: ";
    cin >> tam;

    int vet[tam];
    LerVetor(vet, tam);
    ImprimirVetor(vet, tam);

    cout << "Ns Pares: " << Pares(vet, tam) << endl;
    cout << "Ns Impares: " << Impares(vet, tam) << endl;

    system("Pause");
    return 0;
    
}