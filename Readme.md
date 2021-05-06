# Controle de Saídas Independentes com ESP32

### Resumo

Nesse Projeto temos três saídas digitais completamente independentes uma da outra. Cada uma das saídas têm seu estado alternado num intervalo de tempo fixo e único. Como queremos que cada saída seja completamente independente não podemos usar "delays" no código, já que eles vão "prender" o processador por determinado intervalo de tempo e afetar as outras saídas.

Para resolver esse problema usamos a função "millis", onde o controle de cada uma das saídas será feito baseado no tempo atual do processador, isso nos permite verificar o tempo do processador e só alterar a saída caso atingirmos o intervalo de tempo fixo daquela saída e sem afetar as outras saídas.

### Como Usar

Para clonar projetos do PlatformIO como esse, siga o guia passo-a-passo disponível no repositório: [Instrucoes-PlatformIO](https://github.com/Zebio/Instrucoes-PlatformIO)


### Esquemático do Hardware 

Estamos usando 3 LEDs para representar as 3 saídas como podemos ver no esquemático do circuito na figura.

![](imagens/hardware.png)
