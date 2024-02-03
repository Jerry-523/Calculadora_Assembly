# Calculadora_Assembly
Calculadora simples com interface de terminal feito em C++ e o processamento feito em Assembly.

## Visão Geral

Este projeto implementa uma calculadora simples com operações aritméticas básicas usando uma combinação das linguagens de programação C++ e Assembly (x86_64). O código em C++ lida com a interação do usuário, a exibição do menu e as chamadas de função para as operações aritméticas implementadas em Assembly para otimização de desempenho.

## Arquivos

- **main.cpp:** Este arquivo contém o código principal em C++ responsável pela interação do usuário, exibição do menu e chamadas de função para as operações aritméticas implementadas em Assembly.

- **math.asm:** Este arquivo contém o código em Assembly que implementa as operações aritméticas (adição, subtração, multiplicação, divisão) que são chamadas pelo código em C++.

- **Makefile:** O Makefile define o processo de compilação do projeto. Ele especifica as flags do compilador, os arquivos de origem e as regras para compilar tanto o código C++ quanto o Assembly.

## Compilação

Para compilar o projeto, execute o seguinte comando no terminal:

```bash
make
```

Esse comando irá compilar tanto o código C++ quanto o Assembly, vinculá-los em um executável chamado `calc` e, em seguida, executar o programa.

## Execução

Após a compilação, execute o programa com o seguinte comando:

```bash
./calc
```

O programa exibirá um menu com opções para adição, subtração, multiplicação e divisão. Siga as instruções na tela para realizar cálculos.

## Interação entre C++ e Assembly

- O código C++ (`main.cpp`) inclui declarações de funções externas para as operações aritméticas implementadas em Assembly.

- O código Assembly (`math.asm`) define funções globais (`addition`, `subtraction`, `multiplication`, `division`) que são chamadas pelo código C++.

- Os parâmetros das funções são passados entre C++ e Assembly usando as convenções de chamada, e os resultados são retornados de acordo.

- O Makefile orquestra o processo de compilação, garantindo que tanto o código C++ quanto o Assembly sejam compilados em arquivos de objeto, vinculados e executados como um programa coeso.

## Observações

- Certifique-se de que seu sistema tenha um compilador C++ compatível (por exemplo, g++) e o NASM (Montador de Amplo Alcance) instalados.

- O projeto assume uma arquitetura de 64 bits.

- O Makefile fornece uma maneira eficiente e automatizada de compilar e executar o programa. Utilize os comandos fornecidos para compilação e execução.

Sinta-se à vontade para explorar e modificar o código para entender melhor a integração de C++ e Assembly neste projeto.
