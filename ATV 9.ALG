Algoritmo "Atv1 (Questão 9)"
// Disciplina  :  Lógica de Programação 
// Professor   : Rafael Lima 
// Descrição   : Vai calcular o custo da gasolina, em uma viagem de carro.
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 26/11/2021
Var
gas, km, dist, custo:real


Inicio
Escreva("Informe o preço da gasolina: ")
leia(gas)
escreva("Coloque o consumo médio do veículo: ")
leia(km)
escreva("Informe a distancia do percurso: ")
leia(dist)
custo <- (gas / km) * dist
limpatela
escreval("O custo da viagem deu R$",custo)
escreva("Já a ida e volta deu R$", custo * 2)
Fimalgoritmo