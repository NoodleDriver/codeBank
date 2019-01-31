selector = int(input("select a number"))

print(selector)
 
if selector == 0:
   print("if. Selector = 0")
elif selector == 1:
   print ("else if. Selector = 1")
else:
   print ("else")

while selector > 0:
   print("while I = {}".format(selector))
   selector = selector - 1

nums = [1,2,3,4]
for i in nums:
   print(i)
