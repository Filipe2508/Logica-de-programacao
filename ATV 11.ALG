Algoritmo "Atv 2 (Questão 11)"
// Disciplina  :  Lógica de Programação 
// Professor   : Rafael Lima 
// Descrição   : Vai calcular a sua média e mostrar se foi aprovado, reprovado po recuperação
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 29/11/2021
Var
n1, n2, n3, n4, m: real


Inicio
escreva("informe a nota do 1° Bim: ")
leia(n1)
escreva("informe a nota do 2° Bim: ")
leia(n2)
escreva("informe a nota do 3° Bim: ")
leia(n3)
escreva("informe a nota do 4° Bim: ")
leia(n4)
m <- (n1 + n2 + n3 + n4)/4
se (m >= 7)entao
   escreval("Aprovado")
   escreva("Média:",m)
   senao
  se (m < 4.5)entao
   escreval("Reprovado")
   escreva("Média:",m)
     senao
   escreval("Recuperação")
   escreva("Média:",m)
  Fimse
fimse
Fimalgoritmo