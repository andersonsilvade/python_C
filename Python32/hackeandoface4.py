import urllib.request
import json

url = 'https://graph.facebook.com/1183621847/picture?type=large'
figura = urllib.request.urlopen(url).read()
f= open('imagem.jpg','wb')
f.write(figura)
f.close()
print('imagem gravada no seu diretorio...')
