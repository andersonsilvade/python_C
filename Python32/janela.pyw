from tkinter import *
app = Tk()
app.title("Show de calouros")
app.geometry("300x100+200+100")

b1 = Button(app,text = "certo!",width = 10)
b1.pack(side = "left" , padx = 10 , pady = 10)

b2 = Button(app, text = "errado!" , width = 10)
b2.pack(side = "rigth" , padx =10, pady = 10)

app.mainloop()
