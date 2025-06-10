#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    float bonus_mensal;

public:
    float bonus_mensal;
    Gerente(const std::string& nome, int id, float salario_base, float bonus);

    void exibir_informacoes() const override;
    float calcular_salario_final() const override;
};
#endif