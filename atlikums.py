a=int(input("Atlikums: "))

b50 = a // 50
b20 = (a - b50*50)//20
b10 = (a - b50*50 - b20*20)//10
b5 = (a - b50*50 - b20*20-b10*10)//5
b2 = (a - b50*50 - b20*20-b10*10-b5*5)//2
b1 = (a - b50*50 - b20*20-b10*10-b5*5-b2*2)//1

print("50 centu monetas: ",b50)
print("20 centu monetas: ",b20)
print("10 centu monetas: ",b10)
print("5 centu monetas: ",b5)
print("1 centu monetas: ",b1)
c = b50+b20+b10+b5+b2+b1
print("Kopā: ",c," monetas")
      
