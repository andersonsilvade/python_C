from graphics import*
win=GraphWin("Draw a Triangle!")
win.setCoords(0.0,0.0,10.0,10.0)
msg=Text(Point(5,0.5),"Clique em três pontos")
msg.draw(win)

p1=win.getMouse()
p1.draw(win)
p2=win.getMouse()
p2.draw(win)
p3=win.getMouse()
p3.draw(win)

tri = Polygon(p1,p2,p3)
tri.setFill("green")
tri.draw(win)

msg.setText("Clique para sair")
win.getMouse()
win.close()
