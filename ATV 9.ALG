Algoritmo "Atv1 (Quest�o 9)"
// Disciplina  :  L�gica de Programa��o 
// Professor   : Rafael Lima 
// Descri��o   : Vai calcular o custo da gasolina, em uma viagem de carro.
// Autor(a)    : Filipe Gomes Negri
// Data atual  : 26/11/2021
Var
gas, km, dist, custo:real


Inicio
Escreva("Informe o pre�o da gasolina: ")
leia(gas)
escreva("Coloque o consumo m�dio do ve�culo: ")
leia(km)
escreva("Informe a distancia do percurso: ")
leia(dist)
custo <- (gas / km) * dist
limpatela
escreval("O custo da viagem deu R$",custo)
escreva("J� a ida e volta deu R$", custo * 2)
Fimalgoritmo