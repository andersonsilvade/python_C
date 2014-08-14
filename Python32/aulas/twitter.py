import urllib.request
url = "http://search.twitter.com/search.json?q=naruto"
resp = urllib.request.urlopen(url).read()
print(resp)
