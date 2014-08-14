notas={}
 notas[9.12]='Juan'
 notas[7.21]='Zack'
 for chave in notas.keys():
	print('%s tem nota %4.2f' %(notas[chave],chave))



for nota,nome in notas.items():
	print('%s tem nota %4.2f' % (nome,notas))
