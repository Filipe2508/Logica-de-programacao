Algoritmo "Atv 2 (Quest�o 12)"
// Disciplina  :  L�gica de Programa��o 
// Professor   : Rafael Lima 
// Descri��o   : Mostra qual o valor maior, menor ou igual
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
    escreva(v1," � maior que",v2)
    senao
      se (v1 < v2) entao
        escreva(v2," � maior que",v1)
        senao
          escreva("Valores Iguais")
      fimse
fimse


Fimalgoritmo