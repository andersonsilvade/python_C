import json
data = json.loads(resp.decode('utf-8'))
print (data['results'])
