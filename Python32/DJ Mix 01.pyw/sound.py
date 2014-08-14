from tkinter import*
from sound_panel import*
import pygame.mixer
import os

app=Tk()
app.title('Head First Mix')

mixer = pygame.mixer
mixer.pre_init(buffer = 300)
mixer.init()

dirList=os.listdir('.')
for fname in dirList:

    #if fname.endswith('.wav') and fname[0] in '345':
    if fname.startswith('1Bla'):
    #if fname.endswith('aif'):
        SoundPanel(app,mixer,fname).pack()
def shutdown():
    mixer.stop()
    app.destroy()
app.protocol('WM_DELETE_WINDOW',shutdown)

app.mainloop()
