import smtplib
server = smtplib.SMTP('smtp.ig.com.br')
 
# Envio de e-mail da conta @xy para a conta @xx
print("vou tentar conectar") 
server.sendmail('andinho.cpv@ig.com.br', 'andersonsilvade@gmail.com',
"""To: andersonsilvade@gmail.com
From: andinho.cpv@ig.com.br
Subject: Teste de envio de email
Estou lhe enviando este email como um teste.
""")
print("enviado")
server.quit()
print ('Envio OK')
