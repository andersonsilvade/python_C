import urllib.request
import json
def femenino(id_friend):
    url='https://graph.facebook.com/'+id_friend
    resp = urllib.request.urlopen(url).read()
    data = json.loads(resp.decode('utf-8'))
    if 'gender' not in data:return False
    return data['gender']=='female'

url = 'https://graph.facebook.com/me/friends?access_token=AAAAAAITEghMBAFCThyrAvmNQZApWj5Ss9Mi8vb5Dvx6zELlCbQeemJo0ZBi752vSA5peQgzW9aTjJpgmXhDej9CcWaUDuFzF9DFoSgt34QNywP5f9L'
resp = urllib.request.urlopen(url).read()
data = json.loads(resp.decode('utf-8'))
for amigo in data['data']:
    if femenino(amigo['id']):
        print(amigo['name'])


