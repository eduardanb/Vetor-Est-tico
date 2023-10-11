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

int OcorrenciaDeNum(int vet[], int tam, int valor){
    int cont = 0;
    for (int i = 0; i < tam; i++){
        if (vet[i] == valor){
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

    int valor;
    cout << "--------------------------------" << endl;
    cout << "Digite um valor para procurar: ";
    cin >> valor;
    cout << "--------------------------------" << endl;
    cout << "Quantidade: " << OcorrenciaDeNum(vet, tam, valor) << endl;
    cout << "--------------------------------" << endl;
    
    system("Pause");
    return 0;
    
}