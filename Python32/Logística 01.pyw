def salvar_dados(): 
    f = open('encomendas.txt', 'a')    
    f.write('Destino: ') 
    f.write('%s\n' % destino.get()) 
    f.write('Descrição: ') 
    f.write('%s\n' % descrição.get())
    f.write('Endereço: ') 
    f.write('%s\n' % endereço.get('1.0', END))
    destino.delete(0, END)
    descrição.delete(0, END)
    endereço.delete('1.0', END)
    f.close()
from tkinter import * 
app = Tk()  #app é uma variavel tk ta chamando a janela
app.title('Head-Ex Logística e Transportes')
Label(app, text = "Destino: ").pack() 
destino = Entry(app) 
destino.pack()
Label(app, text = "Descrição: ").pack() 
descrição = Entry(app) 
descrição.pack()
Label(app, text = "Endereço: ").pack() 
endereço = Text(app) 
endereço.pack()
Button(app, text = "Salvar", command = salvar_dados).pack() 
app.mainloop() 
