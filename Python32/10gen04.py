import bottle

#this is the handler for the root address on the web browser
@bottle.route('/')
def home_page():
  mythings = ['apple', 'orange', 'banana', 'peach']
 #return bottle.template('hello_world', username='Andrew', things=mythings)
  return bottle.template('hello_world', {'username':'Richard',
                                         'things':mythings})


bottle.debug(True)
bottle.run(host='localhost', port = 8080)
