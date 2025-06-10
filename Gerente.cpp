#include "Gerente.h"
#include <iostream>

Gerente::Gerente(const std::string& nome, int id, float salario_base, float bonus_mensal)
    : Funcionario(nome, id, salario_base), bonusMensal(bonus_mensal) {}

float Gerente::calcular_salario_final() const {
    return this->salario_base + this->bonus_mensal;
}

void Gerente::exibir_informacoes() const {
    Funcionario::exibir_informacoes();
    std::cout << "Tipo: Gerente" << std::endl;
    std::cout << "Bônus: " << this->bonus_mensal << std::endl;
}