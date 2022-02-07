Algoritmo "Atv 24"
// Disciplina  :  Lógica de Programação 
// Professor   : Rafael Lima 
// Descrição   : Mostra a idade na tabela na faixa etária
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 07/12/2021
Var
idade: inteiro


Inicio
escreva("Informe sua idade: ")
leia(idade)
Se (idade >= 5) e (idade <= 7) entao
 escreval("Infantil A = 5 - 7 anos")
fimse
 se (idade >= 8) e (idade <= 10) entao
  escreval("Infantil A = 8 - 10 anos")
 fimse
  se (idade >= 11) e (idade <= 13) entao
   escreval("Juvenil A = 11 - 13 anos")
  fimse
   se (idade >= 14) e (idade <= 17) entao
    escreval("Juvenil B = 14 - 17 anos")
   fimse
    se (idade >= 18) e (idade <= 25) entao
     escreval("Sênior = 18 - 25 anos")
    fimse
     se (idade <= 4) ou (idade >= 26) entao
      escreval("Idade fora da faixa etária")
     fimse


Fimalgoritmo