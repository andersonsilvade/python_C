from graphics import*
win=GraphWin("clique o mouse!")
print('Clique o mouse!:')
for i in range (10):
    p=win.getMouse()
    print("Você clicou em: " , p.getX(),p.getY())
win.close()
