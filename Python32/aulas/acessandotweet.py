import urllib.request
import json

def busca_tweets(texto="phyton"):
    url = "http://search.twitter.com/search.json?q=" +texto
    resp = urllib.request.urlopen(url).read()
    data = json.loads(resp.decode('utf-8'))
    return data['results']

def print_tweets(tweets):
  for t in tweets:
    print(t['from_user'] + ':' + t['text'] + '\n')
    
r = busca_tweets()
print_tweets(r)
