# Projeto Robo com Arduino

Este projeto implementa o controle de um robô utilizando a plataforma Arduino. O robô é controlado por dois motores e pode ser comandado via um controle PS3.

## Estrutura do Projeto

- `main.ino`: Arquivo principal que inicializa os motores e o controle PS3, e define a lógica de movimento do robô.
- `motor.cpp` e `motor.h`: Implementação da classe `Motor`, responsável por controlar a velocidade e direção dos motores.
- `robo.cpp` e `robo.h`: Implementação da classe `Robo`, que utiliza dois objetos `Motor` para controlar o robô.
- `README.md`: Este arquivo, contendo a descrição do projeto.

## Como Usar

1. Conecte os pinos do Arduino aos motores conforme definido no arquivo `main.ino`.
2. Carregue o código no Arduino.
3. Conecte o controle PS3 ao Arduino.
4. Utilize o controle PS3 para comandar o robô.

## Dependências

- Biblioteca `Ps3Controller` para controle via PS3.
- Plataforma Arduino.
- arduino-esp32 versão 3.0.2

## Licença

Este projeto está licenciado sob a MIT License.