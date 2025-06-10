#include <iostream>
#include <vector>
#include <string>
#include <limits> 
#include <iomanip> 
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"

void limpar_entrada() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    
    std::vector<Funcionario*> funcionarios;
    int tipo;
    std::cout << "--- Sistema de Cadastro de Funcionários ---" << std::endl;

    for (int i = 0; i < 6; ++i) {
        std::cout << "\n--- Cadastrando Funcionário " << i + 1 << "/6 ---" << std::endl;
        std::cout << "Selecione o tipo de funcionário:" << std::endl;
        std::cout << "1. Desenvolvedor" << std::endl;
        std::cout << "2. Gerente" << std::endl;
        std::cout << "3. Estagiário" << std::endl;
        std::cout << "Opção: ";
        
        while (!(std::cin >> tipo) || tipo < 1 || tipo > 3) {
            std::cout << "Opção inválida. Tente novamente: ";
            limpar_entrada();
        }
        limpar_entrada(); 

        int id;
        std::string nome;
        float salarioBase;

        std::cout << "Digite o ID: ";
        while (!(std::cin >> id)) {
            std::cout << "ID inválido. Digite um número: ";
            limpar_entrada();
        }
        limpar_entrada();

        std::cout << "Digite o Nome: ";
        std::getline(std::cin, nome);

        std::cout << "Digite o Salário Base: ";
        while (!(std::cin >> salario_base)) {
            std::cout << "Salário inválido. Digite um número: ";
            limpar_entrada();
        }
        limpar_entrada();

        switch (tipo) {
            case 1: { 
                int quantidade_projetos;
                std::cout << "Digite a quantidade de projetos: ";
                while (!(std::cin >> quantidade_projetos)) {
                    std::cout << "Valor inválido. Digite um número: ";
                    limpar_entrada();
                }
                funcionarios.push_back(new Desenvolvedor(nome, id, salario_base, quantidade_projetos));
                break;
            }
            case 2: { 
                float bonus_mensal;
                std::cout << "Digite o bônus mensal: ";
                while (!(std::cin >> bonus_mensal)) {
                    std::cout << "Valor inválido. Digite um número: ";
                    limpar_entrada();
                }
                funcionarios.push_back(new Gerente(nome, id, salario_base, bonus_mensal));
                break;
            }
            case 3: { 
                int horas_trabalhada;
                std::cout << "Digite a quantidade de horas trabalhadas: ";
                while (!(std::cin >> horas_trabalhada)) {
                    std::cout << "Valor inválido. Digite um número: ";
                    limpar_entrada();
                }
                funcionarios.push_back(new Estagiario(nome, id, salario_base, horas_trabalhada));
                break;
            }
        }
    }

    std::cout << "\n\n--- Relatório Final de Funcionários ---" << std::endl;

    for (const Funcionario* func : funcionarios) {
        std::cout << "\n----------------------------------------" << std::endl;
        func->exibir_informacoes();
        std::cout << "Salário final: " << std::fixed << std::setprecision(2) << func->calcular_salario_final() << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;

    std::cout << "\nLimpando memória..." << std::endl;
    for (Funcionario* func : funcionarios) {
        delete func; 
    }
    funcionarios.clear(); 
    std::cout << "Sistema finalizado." << std::endl;
    return 0;
}