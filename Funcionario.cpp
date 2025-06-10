#include "Funcionario.h"
#include <iostream>
#include <iomanip> 

Funcionario::Funcionario(const std::string& nome, int id, float salario_base)
    : nome(nome), id(id), salario_base(salario_base) {}

void Funcionario::set_nome(const std::string& nome) {
    this->nome = nome;
}

std::string Funcionario::get_nome() const {
    return this->nome;
}

void Funcionario::set_id(int id) {
    this->id = id;
}

int Funcionario::get_id() const {
    return this->id;
}

void Funcionario::set_salario_base(float salario_base) {
    this->salario_base = salario_base;
}

float Funcionario::get_balario_base() const {
    return this->salario_base;
}

void Funcionario::exibir_informacoes() const {
    std::cout << "ID: " << this->id << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salário base: " << std::fixed << std::setprecision(2) << this->salario_base << std::endl;
}