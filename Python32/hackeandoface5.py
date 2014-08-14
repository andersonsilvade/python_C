import urllib.request
import json

url = 'https://graph.facebook.com/me/friends?access_token=AAAAAAITEghMBAFCThyrAvmNQZApWj5Ss9Mi8vb5Dvx6zELlCbQeemJo0ZBi752vSA5peQgzW9aTjJpgmXhDej9CcWaUDuFzF9DFoSgt34QNywP5f9L'
resp = urllib.request.urlopen(url).read()
data = json.loads(resp.decode('utf-8'))
for amigo in data['data']:
    print(amigo['name'])


