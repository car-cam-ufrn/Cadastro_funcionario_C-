#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "Funcionario.h"

class Estagiario : public Funcionario {
private:
    int horas_trabalhadas;

public:
    Estagiario(const std::string& nome, int id, float salario_base, int horas_trabalhadas);

    void exibirInformacoes() const override;
    float calcular_salario_final() const override;
};

#endif 