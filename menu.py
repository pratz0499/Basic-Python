class dict:
	def __init__(self):
		self.__dict__={}
	def additems(self,item,cost):
		self.__dict__[item]=cost
	def show(self):
		for k,v in self.__dict__.items():
		    print(k,'=',v)
	def show_items(self,items):
		price=self.__dict__.get(items)
		print(price)
	def __add__(self,other):
		self.__dict__[other[0]]=other[1]
		return self
	def __setitem__(self,index,value):
		self.__dict__[index]=value
		return self
	def __getitem__(self,index):
		return self.__dict__[index]


class menu(dict):
    pass

class order(dict):
    def __init__(self):
        dict.__init__(self)
        order1=[]
        
    def takeorder(self,item):
        if item in self.__dict__():
            print("Order already taken")
        else:
            self.order1.append(item)
            return order1


m=order()
m.additems('idly',20)
m.additems('dosa',25)
m.show()
