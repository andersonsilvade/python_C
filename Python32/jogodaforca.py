# -*- coding: utf-8 -*-

####################
# Proyecto: JogodaForca.py!
# Descriçao: versao em modo texto do jogo da Forca.
# Versión: 0.1
# Autor: Renato Cesar Vieira.
# Licencia: GNU/GPL.

import random

def criar_buneco(opcao):
    if opcao == 6:
        print """ Q
        """

    if opcao == 5:
        print """ Q
 ||
        """

    if opcao == 4:
        print """ Q
/||
 
        """

    if opcao == 3:
        print """ Q
/||\ 
      """

    if opcao == 2:
        print """ Q
/||\ \n /
 
        """

    if opcao == 1:
        print """ Q
/||\ \n /\ 
        """
        
def listar(cadena):
	cadena = []
	for letra in palavra:
		cadena += letra
	return cadena
	

def comprovar_letra(letra, cadena):
	if letra in cadena:
		return 1
	else:
		return 0 
		

def substituir_letra(letra, cadena, lista):
	i = 0
	while i < len(cadena):
		if letra == cadena[i]:
			lista[i] = letra
		i += 1


def fim(lista):
	i = 0
	lista2 = [""] * len(lista)
	while i < len(lista):
		palavra = lista[i]
		lista2[i] += palavra[:-1]
		i += 1
	return lista2

arquivo = open("palavras.dat", "r")
listacomfim = arquivo.readlines()
lista = fim(listacomfim)


palavra = lista[random.randint(0,len(lista)-1)]


listada = listar(palavra)

	
adivinhar = ['_'] * len(palavra)

rep = 1
while rep == 1:
    
    print "-" * 20
    print "PYFORCA"
    print "-" * 20
    print "So aceita letras minusculas"
    print "So tem 6 chaces ."
    print "A palavra contem", len(palavra), "letras.\n"


    vidas = 6

    
    while vidas > 0:
        if comprovar_letra("_", adivinhar):
            print "Faltam", vidas, "vidas."
            criar_buneco(vidas)
            print adivinhar
            letra = raw_input("Indruduza uma letra: ")
            if comprovar_letra(letra, palavra):
                substituir_letra(letra, palavra, adivinhar)
                print "Sim, contem a ", "letra", letra
            else:
                print "Nao, a palavra nao comtem: ", letra
                vidas -= 1
                                
        else:
            print "¡Sim!, ¡a palavra era", palavra, "Ganhouuuu!"
            break

    if vidas <= 0:		
        print "¡Foi Pyforcado!, a palavra era", palavra
     
