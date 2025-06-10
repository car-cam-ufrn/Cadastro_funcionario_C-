#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
protected:
    std::string nome;
    float salario_base;

private:
    int id;

public:

    Funcionario(const std::string& nome, int id, float salario_base);

    virtual ~Funcionario() = default;

    void set_nome(const std::string& nome);
    
    std::string get_nome() const;

    void set_id(int id);

    int get_id() const;

    void set_salario_base(float salario_base);

    float get_salario_base() const;

    virtual void exibir_informacoes() const;

    virtual float calcular_salario_final() const = 0;
};
#endif 