from tkinter import *
import pygame.mixer

app = Tk()
app.title('DJ Mix')
app.geometry('250x100+200+100')

som = '39147_M_RED_beep_line.wav'
mixer = pygame.mixer
mixer.init()

def termina():
    track.stop()
    app.destroy()
def muda():
    if tocando.get()==1:
        track.play(loops = -1)
    else:
        track.stop()
track = mixer.Sound(som)
tocando = IntVar()
tocar = Checkbutton(app,variable = tocando,command = muda ,text = som)
tocar.pack()
app.protocol('WM_DELETE_WINDOW',termina)
app.mainloop()
