dia,mes,ano =input("data: ").split('/')
ms = '''Janeiro Fevereiro Março Abril Maio Junho Julho Agosto Setembro Outubro Novembro Dezembro'''.split()
print('Você nasceu em %s de %s de %s'  % (dia, ms[int(mes)-1], ano))
