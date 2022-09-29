print('Augstums: ', end='\n')
h = int(input())

while(h<0 or h > 8):
  print("Tā ir nederīgs augstums")
  print('Augums: ', end='')
  h = int(input())

for i in range(h):
    print(" "*(h-i)+"#"*(i+1))
    
for i in range(h):
    print("#"*(i+1))

for i in range(h):
    print(" "*(h-i)+"#"*(i+1)+"*"+"#"*(i+1))
