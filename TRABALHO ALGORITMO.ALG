Algoritmo "Trabalho Algoritmo"
// Disciplina  :  L�gica de Programa��o
// Professor   : Rafael Lima
// Descri��o   : ler tr�s valores inteiros distintos que o usuario digitou
//e no fim coloca em ordem crescente
// Autor(a)    : Filipe Gomes Negri
// Data atual  :08/12/2021
Var
o, p, c: inteiro


Inicio
escreva("Infome o 1� n�mero: ")
leia(o)
escreva("Informe o 2� n�mero: ")
leia(p)
escreva("Informe o 3� n�mero: ")
leia(c)
se (o <= p) e (o <= c) e (c >= p) entao
escreval("A ordem crescente �:",o,p,c)
 senao
  se (p <= o) e (p <= c) e (o >= c) entao
   escreval("A ordem crescente �:",p,c,o)
    senao
     se (c <= p) e (c <= o) e (p >= o) entao
      escreval("A ordem crescente �:",c,o,p)
       senao
        se (p <= o) e (p <= c) e (c >= o) entao
         escreval("A ordem crescente �:",p,o,c)
          senao
           se (c <= o) e (c <= p) e (o >= p) entao
            escreval("A ordem crescente �:",c,p,o)
             senao
              se (p >= o) e (p >= c) e (o >= c) entao
               escreval("A ordem crescente �:",c,o,p)
                senao
                 se (p >= o) e (p >= c) e (c >= o) entao
                  escreval("A ordem crescente �:",o,c,p)
fimse
  fimse
     fimse
        fimse
           fimse
              fimse
                fimse






Fimalgoritmo