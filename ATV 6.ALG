Algoritmo "Atv1 (Questão 6)"
// Disciplina  :  Lógica de Programação 
// Professor   : Rafael Lima 
// Descrição   : Motra o sucessor e antecessor, do número escolhido.
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 24/11/2021
Var
l1, rest: Inteiro


Inicio
Escreva("informe um valor: ")
Leia(l1)
rest <- l1 + 1
Escreval("O sucessor é: ", rest)
rest <- l1 - 1
Escreval("E o antecessor é: ", rest)


Fimalgoritmo