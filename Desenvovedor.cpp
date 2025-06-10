#include "Desenvolvedor.h"
#include <iostream>
#include <iomanip>

Desenvolvedor::Desenvolvedor(const std::string& nome, int id, float salario_base, int quantidade_projetos)
    : Funcionario(nome, id, salario_base), quantidadeDeProjetos(quantidade_projetos) {}

float Desenvolvedor::calcular_salario_final() const {
    return this->salario_base + (500.0f * this->quantidade_projetos);
}

void Desenvolvedor::exibir_informacoes() const {
      Funcionario::exibir_informacoes();
    std::cout << "Tipo: Desenvolvedor" << std::endl;
    std::cout << "Projetos: " << this->quantidade_projetos << std::endl;
}