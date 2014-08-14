from tkinter import * 
def salvar_dados():
    try:
        f = open("encomendas.txt", "a")    
        f.write("Destino:\n") 
        f.write("%s\n" % destino.get()) 
        f.write("Descrição:\n") 
        f.write("%s\n" % descrição.get()) 
        f.write("Endereço:\n") 
        f.write("%s\n" % endereço.get("1.0", END)) 
        destino.set(None) 
        descrição.delete(0, END) 
        endereço.delete("1.0", END)
        f.close()
    except Exception as exceção:
        messagebox.showerror('Erro!',
                'Não foi possível gravar a encomenda\n%s' %exceção)
    
def ler_destinos(arquivo): 
    destinos = [] 
    f = open(arquivo) 
    for linha in f: destinos.append(linha.rstrip()) 
    return destinos

app = Tk() 
app.title('Head-Ex Logística e Transportes') 
Label(app, text = "Destino:").pack() 
destino = StringVar() 
destino.set('São José dos Campos') 

opções = ler_destinos("cidades.txt") 
OptionMenu(app, destino, *opções).pack()

Label(app, text = "Descrição:").pack() 
descrição = Entry(app) 
descrição.pack() 
Label(app, text = "Endereço:").pack() 
endereço = Text(app) 
endereço.pack() 
Button(app, text = "Salvar", command = salvar_dados).pack() 
app.mainloop() 

