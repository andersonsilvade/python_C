'''ips .txt'''

def ip_ok(ip):
    ip = ip.split('.')
    for byte in ip:
        if int(byte) > 255:
            return False
    return True
arq=open('ips.txt')
validos=open('válidos.txt','w')
invalidos=open('inválidos.txt','w')
for linha in arq.readlines():
    if ip_ok(linha):
        validos.write(linha)
    else:
        invalidos.write(linha)
arq.close()
validos.close()
invalidos.close()
