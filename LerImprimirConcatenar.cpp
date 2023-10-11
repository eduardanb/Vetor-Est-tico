#include <iostream>
using namespace std;

void LerVetor(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "Posicao " << i+1 << ": ";
        cin >> vet[i];
    }
}

void ImprimirVetor(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << vet[i] << endl;
    }
}

void ConcatenarVets(int vet1[], int tam1, int vet2[], int tam2, int vet3[], int tam3){
    for (int i = 0; i < tam1; i++){
        vet3[i] = vet1[i];
    }
    for (int i = 0; i < tam2; i++) {
        vet3[tam1 + i] = vet2[i];
    }
    tam3 = tam1 + tam2;
}

int main(){

    const int tam1 = 4;
    const int tam2 = 5;

    int vet1[tam1];
    int vet2[tam2];
    
    cout << "Digite os elementos do primeiro vetor:" << endl;
    LerVetor(vet1, tam1);

    cout << "Digite os elementos do segundo vetor:" << endl;
    LerVetor(vet2, tam2);

    const int tam3 = tam1 + tam2;
    int vet3[tam3];

    ConcatenarVets(vet1, tam1, vet2, tam2, vet3, tam3);

    cout << "Vetor resultante da concatenacao:" << endl;
    ImprimirVetor(vet3, tam3);

    system("pause");
    return 0;

}