#include "Ocorrencia.hpp"
#include <iostream>

using namespace std;

Ocorrencia::Ocorrencia() {
    this->next = NULL;
}
Ocorrencia::Ocorrencia(int i) {
    this->numOcorrencia = i;
    this->next = NULL;
}
Ocorrencia::Ocorrencia(int i, Ocorrencia *next){
    this->numOcorrencia = i;
    this->next = next;
}

Ocorrencia::~Ocorrencia() {
    // Você deve liberar a memória alocada dinamicamente, se houver alguma, aqui
    // Por exemplo, se você alocou memória para 'next' em algum lugar, deve liberá-la aqui.
}

