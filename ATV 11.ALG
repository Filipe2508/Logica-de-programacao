Algoritmo "Atv 2 (Quest�o 11)"
// Disciplina  :  L�gica de Programa��o 
// Professor   : Rafael Lima 
// Descri��o   : Vai calcular a sua m�dia e mostrar se foi aprovado, reprovado po recupera��o
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 29/11/2021
Var
n1, n2, n3, n4, m: real


Inicio
escreva("informe a nota do 1� Bim: ")
leia(n1)
escreva("informe a nota do 2� Bim: ")
leia(n2)
escreva("informe a nota do 3� Bim: ")
leia(n3)
escreva("informe a nota do 4� Bim: ")
leia(n4)
m <- (n1 + n2 + n3 + n4)/4
se (m >= 7)entao
   escreval("Aprovado")
   escreva("M�dia:",m)
   senao
  se (m < 4.5)entao
   escreval("Reprovado")
   escreva("M�dia:",m)
     senao
   escreval("Recupera��o")
   escreva("M�dia:",m)
  Fimse
fimse
Fimalgoritmo