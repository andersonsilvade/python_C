import urllib.request
import json

url = 'http://graph.facebook.com/19292868552'
resp = urllib.request.urlopen(url).read()
data = json.loads(resp.decode('utf-8'))
print(data)

url = data['cover']['source']
logo = urllib.request.urlopen(url).read()
f = open ('logo.jpg', 'wb')
f.write(logo)
f.close()
print('logo gravado em logo.jpg')
