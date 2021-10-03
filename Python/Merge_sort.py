def mergesort(arr):
  if len(arr)<=1:
    return
  mid=len(arr)//2
  L=arr[:mid]
  R=arr[mid:]
  mergesort(L)
  mergesort(R)
  i=j=k=0
  while i<len(L) and j<len(R) and k<len(arr):
    if L[i]<=R[j]:
      arr[k]=L[i]
      i+=1
    else:
      arr[k]=R[j]
      j+=1
    k+=1
  while i<len(L):
    arr[k]=L[i]
    i+=1
    k+=1
  while j<len(R):
    arr[k]=R[j]
    j+=1
    k+=1
  return
