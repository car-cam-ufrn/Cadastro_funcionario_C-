#include "Estagiario.h"
#include <iostream>

Estagiario::Estagiario(const std::string& nome, int id, float salario_base, int horas_trabalhadas)
    : Funcionario(nome, id, salario_ase), horas_trabalhadas(horas_trabalhadas) {}

float Estagiario::calcular_salario_final() const {
    return this->salario_base * (static_cast<float>(this->horas_trabalhadas) / 160.0f);
}

void Estagiario::exibir_informacoes() const {
    Funcionario::exibir_informacoes();
    std::cout << "Tipo: Estagiário" << std::endl;
    std::cout << "Horas trabalhadas: " << this->horas_trabalhadas << std::endl;
}