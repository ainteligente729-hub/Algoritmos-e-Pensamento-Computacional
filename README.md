# UDF-Fluxograma
Primeiro trabalho da disciplina Algoritmo e Pensamento Computacional. 

========== CALCULADORA CIENTÍFICA ==========

1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Potenciação
6 - Raiz quadrada
7 - Porcentagem
8 - Módulo
9 - Seno
10 - Cosseno

11 - Sair

# 1 - Adição
O fluxograma representa o algoritmo desenvolvido para realizar a soma de dois números.

Primeiramente, o programa é iniciado e são declaradas as variáveis que serão utilizadas durante a execução. A variável inteira “opçao” é responsável por armazenar a escolha da operação feita pelo usuário. Em seguida, são declaradas as variáveis reais “num1”, “num2” e “resultado”, que serão utilizadas, respectivamente, para armazenar os dois números informados pelo usuário e o resultado da operação.

Após a declaração das variáveis, o programa apresenta ao usuário as opções de operações disponíveis e solicita que ele escolha qual deseja realizar.

Depois que a opção de soma é selecionada, o programa solicita que o usuário informe o primeiro número, que será armazenado na variável “num1”. Em seguida, solicita o segundo número, armazenado na variável “num2”.

Por fim, o programa realiza a operação num1 + num2 e armazena o resultado na variável “resultado”. Dessa forma, o valor obtido é apresentado ao usuário como resultado da soma.

# 2 - Subtração
Este módulo implementa um algoritmo simples que realiza a subtração entre dois números reais informados pelo usuário, 
exibindo o resultado ao final da execução. Ele faz parte de um projeto maior, representando a lógica de uma das operações aritméticas básicas do sistema.

O fluxo do programa segue os seguintes passos, conforme representado no fluxograma:

1.Início (Principal) Ponto de entrada do algoritmo.
2.Declaração de variáveis São declaradas três variáveis do tipo Real:
  valorA — armazena o primeiro número (minuendo)
  valorB — armazena o segundo número (subtraendo)
  resultado — armazenará o resultado da subtração
3.Entrada do primeiro valor
4.O programa exibe a mensagem "Digite o valor inicial da subtração"
5.O usuário informa o valor, que é armazenado em valorA
6.Entrada do segundo valor
7.O programa exibe a mensagem "Digite o valor a ser subtraído"
8.O usuário informa o valor, que é armazenado em valorB
9.Processamento
10.É realizado o cálculo: resultado <- valorA - valorB
11.Saída
12.O programa exibe a mensagem "O resultado é " & resultado, concatenando o texto fixo com o valor calculado
13.Fim - Encerramento da execução do algoritmo.

O algoritmo não trata validação de tipos ou valores não numéricos; assume-se que os dados de entrada são válidos.

# 3 - Multiplicação

O fluxograma inicia com a declaração da variável opção, que será utilizada para armazenar a escolha realizada pelo usuário.

  1. Primeiramente, é utilizada a propriedade “Escrever” para apresentar ao usuário o menu de operações disponíveis na calculadora:
      “Escolha a opção: 1 – adição, 2 – subtração, 3 – multiplicação, 4 – divisão, 5 – potenciação, 6 – raiz quadrada, 7 – porcentagem, 8 – módulo, 9 – seno, 10 – cosseno, 11 – sair.” 
  2. Em seguida, é utilizada a propriedade “Ler”, responsável por receber e armazenar a opção escolhida pelo usuário na variável opção.
  3. Após a leitura da opção, é utilizada a estrutura condicional “Se”, verificando se o valor informado pelo usuário corresponde à opção 03, que representa a operação de multiplicação.
  4. Caso a condição seja verdadeira, são declaradas as variáveis a, b e multiplicação, que serão utilizadas durante o cálculo.
  5. Depois, o fluxograma utiliza novamente a propriedade “Escrever” para solicitar ao usuário o primeiro valor:
      “Digite o número de a”.
  6. A propriedade “Ler” é utilizada para receber o valor informado e armazená-lo na variável a.
  7. Em seguida, utiliza-se “Escrever” para solicitar o segundo valor:
      “Digite o número de b”.
  8. Novamente, a propriedade “Ler” recebe o valor informado e o armazena na variável b.
  9. Após receber os dois valores, é utilizada a propriedade de atribuição para realizar a operação:
      multiplicação ← a × b
  10. Por fim, o fluxograma utiliza a propriedade “Escrever” para apresentar o resultado de maneira mais clara e formal ao usuário:
      “A multiplicação é igual a: " &multiplicação&""

Dessa forma, o fluxograma recebe dois números informados pelo usuário, realiza a multiplicação entre eles e apresenta o resultado final.

#4 - Divisão
Quando a condição referente à opção 03 é falsa, o fluxograma segue para uma nova estrutura condicional, responsável por verificar se a opção escolhida é a opção 04, correspondente à operação de divisão.

  1. É utilizada a estrutura “Se”, verificando se o valor da variável opção é igual a 04.
  2. Caso a condição seja verdadeira, são declaradas as variáveis a, b e divisão, que serão utilizadas para realizar o cálculo.
  3. Em seguida, o fluxograma utiliza a propriedade “Escrever” para solicitar ao usuário o primeiro número:
      “Digite o número de a”.
  4. A propriedade “Ler” recebe o valor informado e o armazena na variável a.
  5. Depois, utiliza-se novamente “Escrever” para solicitar o segundo número:
      “Digite o número de b”.
  6. A propriedade “Ler” recebe o segundo valor e o armazena na variável b.
  7. Após os dois valores serem armazenados, é utilizada a propriedade de atribuição para realizar a divisão:
      divisão ← a ÷ b
  8. Por fim, o resultado é apresentado ao usuário por meio da propriedade “Escrever”, utilizando uma mensagem mais clara e formal:
      “A divisão é igual a: ” & divisão

Assim, quando o usuário seleciona a opção 04, o fluxograma solicita os dois valores, realiza a divisão entre eles e apresenta o resultado na tela.

# 5 - Potenciação
  O fluxograma representa um algoritmo para calcular uma potência usando dois números inteiros. 
  Primeiro, o programa começa e mostra a mensagem “Faça uma equação de potenciação”. 
  Em seguida, são declaradas três variáveis inteiras: a, b e c, sendo "a" o primeiro número, "b" o segundo número e "c" o resultado.
  Depois, o programa pede ao usuário o primeiro número e o armazena em "A" por meio do comando “Ler a”. 
  Em seguida, solicita o segundo número e o armazena em "b" usando “Ler b”. 
  Após receber os dois valores, o programa executa c ← a^b, ou seja, calcula "a" elevado à potência de "b" e guarda o resultado em "c". 
  Por exemplo, se a = 2 e b = 3, então c = 2³ = 8. 
  Por fim, o programa exibe “A elevado por B é” junto com o valor de "c" e chega ao bloco “Fim”, encerrando a execução.

# 6 - Raiz quadrada
  Este módulo implementa o cálculo da raiz quadrada de um número real utilizando o método iterativo de Newton-Raphson (também conhecido como método babilônico), 
  que aproxima o valor da raiz por sucessivas iterações até atingir uma margem de erro aceitável. Ele faz parte de um projeto maior, representando a lógica de uma das operações matemáticas do sistema.

O fluxo do programa segue os seguintes passos, conforme representado no fluxograma:

  1.Início (Principal) Ponto de entrada do algoritmo.
  2.Declaração de variáveis São declaradas quatro variáveis do tipo Real:
    numero — número do qual se deseja extrair a raiz quadrada
    aproxA — aproximação atual da raiz
    aproxB — nova aproximação calculada a cada iteração
    erro — diferença entre aproxA e aproxB, usada como critério de parada
  3.Entrada de dados
  4.O programa exibe a mensagem "Escreva o número ao qual quer descobrir a raiz"
  5.O usuário informa o valor, armazenado em numero
  6.Validação: número negativo
    Se numero < 0 (Verdade), o programa exibe "Não existe raiz quadrada real desse número" e encerra, pois   8.números negativos não possuem raiz quadrada real.
    Se numero >= 0 (Falso), o algoritmo segue para a próxima verificação.
  9.Validação: número igual a zero
    Se numero = 0 (Verdade), o programa exibe diretamente "A raiz é 0" e encerra, evitando divisão por zero nas iterações seguintes.
  Se numero ≠ 0 (Falso), o algoritmo segue para o processo iterativo.
  10.Inicialização da aproximação
    aproxA <- numero (chute inicial: o próprio número)
    erro <- 1 (valor inicial arbitrário, apenas para garantir a entrada no laço)
  11.Laço iterativo (repete enquanto erro > 0.000001) Enquanto o erro for maior que a precisão desejada  (0.000001):
  12.Calcula uma nova aproximação: aproxB <- (aproxA + numero/aproxA) / 2
  13.Calcula o erro entre as aproximações: erro <- aproxB - aproxA
  14.Garante que o erro seja positivo (valor absoluto):
    Se erro < 0 (Verdade): erro <- erro * -1
    Se erro >= 0 (Falso): mantém o valor
  15.Atualiza a aproximação: aproxA <- aproxB
  16.Retorna à verificação da condição do laço
  17.Saída
  18.Quando erro <= 0.000001 (condição Falsa), o laço é interrompido e o programa exibe "Raiz quadrada = " & aproxA
  19.Fim-Encerramento da execução do algoritmo.

O método converge rapidamente (convergência quadrática) para a maioria dos valores positivos, tornando o algoritmo eficiente mesmo com um critério de parada bastante rigoroso (0.000001).
  O uso do valor absoluto do erro (erro<0 → erro*-1) é necessário porque aproxB - aproxA pode ser negativo, e o critério de parada compara sempre uma grandeza positiva.
  Casos especiais (número negativo e número zero) são tratados antes do laço para evitar divisão por zero e resultados matematicamente inválidos.
  
# 7 - Porcentagem
O fluxograma representa o algoritmo desenvolvido para realizar a porcentagem de um número pelo outro.

Primeiramente, o programa é iniciado e são declaradas as variáveis que serão utilizadas durante a execução. A variável inteira “opção” é responsável por armazenar a escolha da operação feita pelo usuário. Em seguida, são declaradas as variáveis reais “num1”, “num2” e “resultado”, que serão utilizadas, respectivamente, para armazenar os dois números informados pelo usuário e o resultado da operação.

Após a declaração das variáveis, o programa apresenta ao usuário as opções de operações disponíveis e solicita que ele escolha qual deseja realizar.

Depois que a opção de porcentagem é selecionada, o programa solicita que o usuário informe se a porcentagem será utilizada para acrescentar ou subtrair um determinado valor inicial.

Quando a opção selecionada for 1 (verdadeira), indicando que a porcentagem deverá ser acrescentada, o programa solicita que o usuário informe o valor total, que será armazenado na variável “num1”. Em seguida, solicita o valor da porcentagem, armazenado na variável “num2”. Após receber os valores, o programa realiza a operação num1 × (1 + num2/100) e armazena o resultado na variável “resultado”, que será apresentado ao usuário.

Caso a opção selecionada seja diferente de 1 (falsa), indicando que a porcentagem deverá ser subtraída, o programa também solicita o valor total e o valor da porcentagem, armazenando-os nas variáveis “num1” e “num2”, respectivamente. Nesse caso, a operação realizada será num1 × (1 - num2/100). O resultado da operação será armazenado na variável “resultado” e apresentado ao usuário, finalizando essa etapa do programa.

# 8 - Módulo

  O fluxograma começa declarando três variáveis numero1, numero2 e resultado. 
  Depois, o programa mostra "Digite o primeiro número:" é pede para ler o primeiro número representado pela variável numero1. 
  Em seguida mostra "Digite o segundo número:" e pede para ler o segundo numero
  representado pela variável numero2, depois verifica se numero2 é igual a zero. 
  Se for, mostra uma mensagem informando que "não é possível calcular o módulo por zero.". 
  Se não for, calcula numero1 % numero2, que representa o resto da divisão, e armazena na variável resultado. 
  Por fim, mostra o resultado e encerra o programa.

# 9 - Seno
Comecei com o seno
Coloquei variáveis:

contador (Inteiro) — guarda o ângulo atual, começa em 1
seno (Real) — guarda o resultado do cálculo do seno

Adicionei a condição do laço (while):
O laço roda enquanto contador<>11. Como o contador começa em 1 e vai aumentando, ele passa pelos ângulos 1 até 10 e para exatamente quando chega em 11.

Como funciona dentro do laço, em ordem:
1º Atribuir: seno <- Sin(contador * 3.14159/180)
2º Atribuir: contador <- contador + 1

O bloco contador <- contador + 1 fica no final do laço, dentro dele. É ele que faz o contador avançar a cada volta — sem esse incremento o laço nunca chegaria em 11 e ficaria rodando pra sempre.

# 10 - Cosseno
Seno e o cosseno juntos

Criei mais variáveis:

contador (Inteiro) — guarda o ângulo atual, começa em 1
seno (Real) — guarda o resultado do cálculo do seno
cosseno (Real) — guarda o resultado do cálculo do cosseno

Adicionei a condição do laço (while):
O laço roda enquanto contador<>11. Como o contador começa em 1 e vai aumentando, ele passa pelos ângulos 1 até 10 e para exatamente quando chega em 11.

Como funciona dentro do laço, em ordem:
1º Atribuir: seno <- Sin(contador * 3.14159/180)
2º Atribuir: cosseno <- Cos(contador * 3.14159/180)
3º Escrever: contador & " -> Seno: " & seno & " Cosseno: " & cosseno
4º Atribuir: contador <- contador + 1

O bloco contador <- contador + 1 fica no final do laço, dentro dele. É ele que faz o contador avançar a cada volta — sem esse incremento o laço nunca chegaria em 11 e ficaria rodando pra sempre.



# 11 - Sair

# Observações

Sara Giovanna (Adição e Porcentagem)
Soma: O programa solicita dois números ao usuário e armazena-os nas variáveis num1 e num2. Em seguida, realiza a soma dos dois valores e armazena o resultado na variável resultado.
Porcentagem: O usuário escolhe se deseja acrescentar ou subtrair uma porcentagem de um valor inicial. O programa recebe os valores, realiza o cálculo correspondente e apresenta o resultado.

Stéffany Rodrigues ( multiplicação e Divisão)
O fluxo segue inicialmente pela escolha da operação. 
Quando o usuário seleciona a opção 03, o caminho verdadeiro realiza a multiplicação. 
Caso a opção 03 seja falsa, o fluxo verifica a opção 04 e, se ela for verdadeira, realiza a divisão. 
Esse processo permite que cada operação seja executada de acordo com a escolha feita pelo usuário.

Ana Beatriz

Safira Carvalho  (Seno e Cosseno)
Assim ele calcula o seno e o cosseno dos ângulos de 1 até 10, um por vez, e encerra automaticamente quando o contador chega a 11 — sem precisar que o usuário digite nada para parar.
