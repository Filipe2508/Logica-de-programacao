Algoritmo "Atv 2 (Quest�o 15)"
// Disciplina  :  L�gica de Programa��o 
// Professor   : Rafael Lima 
// Descri��o   : ler 5 valores inteiros, e apresentara o menor e maior na tela
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 29/11/2021
Var
a1, a2, a3, a4, a5, Algo, ritmo: inteiro


Inicio
escreva("Informe o 1� n�mero: ")
leia(a1)
Algo <- a1
ritmo <- a1

escreva("Informe o 2� n�mero: ")
leia(a2)
se (a2 > Algo) entao
      algo <- a2
      senao
        se(a2 < ritmo) entao
          ritmo <- a2
        fimse
fimse

escreva("Informe o 3� n�mero: ")
leia(a3)
se (a3 > Algo) entao
      algo <- a3
      senao
        se(a3 < ritmo) entao
          ritmo <- a3
        fimse
fimse

escreva("Informe o 4� n�mero: ")
leia(a4)
se (a4 > Algo) entao
      algo <- a4
      senao
        se(a4 < ritmo) entao
          ritmo <- a4
        fimse
fimse

escreva("Informe o 5� n�mero: ")
leia(a5)
se (a5 > Algo) entao
      algo <- a5
      senao
        se(a5 < ritmo) entao
          ritmo <- a5
        fimse
fimse
limpatela
escreval("Maior Valor,", Algo)
escreval("Menor Valor,", ritmo)

Fimalgoritmo