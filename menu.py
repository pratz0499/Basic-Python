class menu(dict):
    pass

class order(dict):
    def __init__(self, menu1):
        dict.__init__(self)
        self.menu1=menu1
    def __setitem__(self,k,v):
        if k in self.menu1:
            print('Item already exists')
        else:
            dict.__setitem__(self,k,v)	

        
    
m=menu()

m['idly'] = 20
m['vada'] = 20
o=order(m)
o['dosa']=40
o['idly']=10
#o/p-> item exits in menu
#m.additems('dosa',25)
#m.show()
