import urllib.request
import json

def trend_topics():
    url = 'https://api.twitter.com/1/trends/1.json'
    resp = urllib.request.urlopen(url).read()
    data= json.loads(resp.decode('utf-8'))
    return data
for results in trend_topics():
    for trend in results['trends']:
        print(trend['name'])
