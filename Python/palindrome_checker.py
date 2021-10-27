s="sars"
i=0
j=-1
flag=0

while(i<len(s)//2):
  if(s[i]!=s[j]):
    flag=1
    break
  i+=1
  j-=1
if(flag==0):
  print(s, "is palindrome..")
else:
  print(s, "is not a palindrome")
  
