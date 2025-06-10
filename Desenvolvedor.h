#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int quantidade_projetos;

public:
    Desenvolvedor(const std::string& nome, int id, float salario_base, int quantidade_projetos);

    void exibir_informacoes() const override;
    float calcular_salario_final() const override;
};
#endif 
