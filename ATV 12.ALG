Algoritmo "Atv 2 (Questão 12)"
// Disciplina  :  Lógica de Programação 
// Professor   : Rafael Lima 
// Descrição   : Mostra qual o valor maior, menor ou igual
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 29/11/2021
Var
v1, v2: inteiro


Inicio
escreva("Coloque o primeiro valor: ")
leia(v1)
escreva("Coloque o segundo valor: ")
leia(v2)
se (v1 > v2)entao
    escreva(v1," é maior que",v2)
    senao
      se (v1 < v2) entao
        escreva(v2," é maior que",v1)
        senao
          escreva("Valores Iguais")
      fimse
fimse


Fimalgoritmo